module rv32i_core (
    input  wire        clk,
    input  wire        rst,

    // Instruction fetch
    output wire [31:0] i_addr,
    input  wire [31:0] i_rdata,

    // Data memory / MMIO (combinational for single-cycle model)
    output wire        d_we,
    output wire [3:0]  d_wstrb,
    output wire [31:0] d_addr,
    output wire [31:0] d_wdata,
    input  wire [31:0] d_rdata
);

    // ----------------------------
    // State: PC + registers
    // ----------------------------
    reg [31:0] pc;
    reg [31:0] x [0:31];
    integer k;

    // Single-cycle: fetch address is just PC
    assign i_addr = pc;

    // ----------------------------
    // Decode fields
    // ----------------------------
    wire [31:0] instr  = i_rdata;

    wire [6:0]  opcode = instr[6:0];
    wire [2:0]  funct3 = instr[14:12];
    wire [6:0]  funct7 = instr[31:25];
    wire [4:0]  rd     = instr[11:7];
    wire [4:0]  rs1    = instr[19:15];
    wire [4:0]  rs2    = instr[24:20];

    wire [31:0] rs1v = (rs1 == 0) ? 32'h0 : x[rs1];
    wire [31:0] rs2v = (rs2 == 0) ? 32'h0 : x[rs2];

    // ----------------------------
    // Immediate helpers
    // ----------------------------
    function [31:0] sext12(input [11:0] v);
        begin sext12 = {{20{v[11]}}, v}; end
    endfunction

    function [31:0] sext13(input [12:0] v);
        begin sext13 = {{19{v[12]}}, v}; end
    endfunction

    function [31:0] sext21(input [20:0] v);
        begin sext21 = {{11{v[20]}}, v}; end
    endfunction

    wire [31:0] imm_i = sext12(instr[31:20]);
    wire [31:0] imm_s = sext12({instr[31:25], instr[11:7]});
    wire [31:0] imm_b = sext13({instr[31], instr[7], instr[30:25], instr[11:8], 1'b0});
    wire [31:0] imm_u = {instr[31:12], 12'h000};
    wire [31:0] imm_j = sext21({instr[31], instr[19:12], instr[20], instr[30:21], 1'b0});

    // ----------------------------
    // Load extension (LB/LH/LW etc)
    // ----------------------------
    function [31:0] load_ext(
        input [31:0] raw,
        input [1:0]  byte_off,
        input [2:0]  f3
    );
        reg [7:0]  b;
        reg [15:0] h;
        begin
            case (byte_off)
                2'd0: b = raw[7:0];
                2'd1: b = raw[15:8];
                2'd2: b = raw[23:16];
                default: b = raw[31:24];
            endcase

            h = (byte_off[1] == 1'b0) ? raw[15:0] : raw[31:16];

            case (f3)
                3'b000: load_ext = {{24{b[7]}}, b};     // LB
                3'b100: load_ext = {24'h0, b};          // LBU
                3'b001: load_ext = {{16{h[15]}}, h};    // LH
                3'b101: load_ext = {16'h0, h};          // LHU
                default: load_ext = raw;                // LW / fallback
            endcase
        end
    endfunction

    // ----------------------------
    // Next-state signals (combinational)
    // ----------------------------
    reg [31:0] pc_next;

    reg        do_wb;
    reg [31:0] wb_data;

    reg        d_we_n;
    reg [3:0]  d_wstrb_n;
    reg [31:0] d_addr_n;
    reg [31:0] d_wdata_n;

    // Drive outputs combinationally (important for MMIO printing on posedge)
    assign d_we    = d_we_n;
    assign d_wstrb = d_wstrb_n;
    assign d_addr  = d_addr_n;
    assign d_wdata = d_wdata_n;

    // ----------------------------
    // Combinational execute
    // ----------------------------
    always @* begin
        // defaults
        pc_next   = pc + 32'd4;

        do_wb     = 1'b0;
        wb_data   = 32'h0;

        d_we_n    = 1'b0;
        d_wstrb_n = 4'h0;
        d_addr_n  = 32'h0;
        d_wdata_n = 32'h0;

        case (opcode)

            7'b0110111: begin // LUI
                do_wb   = 1'b1;
                wb_data = imm_u;
            end

            7'b0010111: begin // AUIPC
                do_wb   = 1'b1;
                wb_data = pc + imm_u;
            end

            7'b1101111: begin // JAL
                do_wb   = 1'b1;
                wb_data = pc + 32'd4;
                pc_next = pc + imm_j;
            end

            7'b1100111: begin // JALR
                do_wb   = 1'b1;
                wb_data = pc + 32'd4;
                pc_next = (rs1v + imm_i) & ~32'd1;
            end

            7'b1100011: begin // BRANCH
                case (funct3)
                    3'b000: if (rs1v == rs2v) pc_next = pc + imm_b; // BEQ
                    3'b001: if (rs1v != rs2v) pc_next = pc + imm_b; // BNE
                    3'b100: if ($signed(rs1v) < $signed(rs2v)) pc_next = pc + imm_b; // BLT
                    3'b101: if ($signed(rs1v) >= $signed(rs2v)) pc_next = pc + imm_b; // BGE
                    3'b110: if (rs1v < rs2v) pc_next = pc + imm_b; // BLTU
                    3'b111: if (rs1v >= rs2v) pc_next = pc + imm_b; // BGEU
                    default: ;
                endcase
            end

            7'b0010011: begin // OP-IMM
                do_wb = 1'b1;
                case (funct3)
                    3'b000: wb_data = rs1v + imm_i; // ADDI
                    3'b111: wb_data = rs1v & imm_i; // ANDI
                    3'b110: wb_data = rs1v | imm_i; // ORI
                    3'b100: wb_data = rs1v ^ imm_i; // XORI
                    3'b010: wb_data = ($signed(rs1v) < $signed(imm_i)) ? 32'd1 : 32'd0; // SLTI
                    3'b011: wb_data = (rs1v < imm_i) ? 32'd1 : 32'd0; // SLTIU
                    3'b001: wb_data = rs1v << instr[24:20]; // SLLI
                    3'b101: wb_data = (funct7[5]) ? ($signed(rs1v) >>> instr[24:20]) : (rs1v >> instr[24:20]); // SRAI/SRLI
                    default: wb_data = rs1v + imm_i;
                endcase
            end

            7'b0110011: begin // OP
                do_wb = 1'b1;
                case ({funct7, funct3})
                    {7'b0000000,3'b000}: wb_data = rs1v + rs2v; // ADD
                    {7'b0100000,3'b000}: wb_data = rs1v - rs2v; // SUB
                    {7'b0000000,3'b111}: wb_data = rs1v & rs2v; // AND
                    {7'b0000000,3'b110}: wb_data = rs1v | rs2v; // OR
                    {7'b0000000,3'b100}: wb_data = rs1v ^ rs2v; // XOR
                    {7'b0000000,3'b010}: wb_data = ($signed(rs1v) < $signed(rs2v)) ? 32'd1 : 32'd0; // SLT
                    {7'b0000000,3'b011}: wb_data = (rs1v < rs2v) ? 32'd1 : 32'd0; // SLTU
                    {7'b0000000,3'b001}: wb_data = rs1v << rs2v[4:0]; // SLL
                    {7'b0000000,3'b101}: wb_data = rs1v >> rs2v[4:0]; // SRL
                    {7'b0100000,3'b101}: wb_data = $signed(rs1v) >>> rs2v[4:0]; // SRA
                    default: wb_data = rs1v + rs2v;
                endcase
            end

            7'b0000011: begin // LOAD
                d_addr_n = rs1v + imm_i;
                do_wb    = 1'b1;
                wb_data  = load_ext(d_rdata, d_addr_n[1:0], funct3);
            end

            7'b0100011: begin // STORE
                d_addr_n = rs1v + imm_s;
                d_we_n   = 1'b1;

                case (funct3)
                    3'b000: begin // SB
                        d_wstrb_n = (4'b0001 << d_addr_n[1:0]);
                        d_wdata_n = ({24'h0, rs2v[7:0]} << (8 * d_addr_n[1:0]));
                    end
                    3'b001: begin // SH
                        d_wstrb_n = d_addr_n[1] ? 4'b1100 : 4'b0011;
                        d_wdata_n = ({16'h0, rs2v[15:0]} << (16 * d_addr_n[1]));
                    end
                    default: begin // SW
                        d_wstrb_n = 4'b1111;
                        d_wdata_n = rs2v;
                    end
                endcase
            end

            default: begin
                // unknown opcode => NOP
            end
        endcase
        /*
        // DEBUG: print whenever we attempt a UART write
        if (d_we_n && ((d_addr_n & 32'hFFFF_FFFC) == 32'h1000_0000)) begin
            $display("UART@pc=%08x instr=%08x rs2=%0d rs2v=%08x wdata=%08x wstrb=%b",
                    pc, instr, rs2, rs2v, d_wdata_n, d_wstrb_n);
        end
        */
    end

    // ----------------------------
    // Sequential state update (PC + regfile only)
    // ----------------------------
    always @(posedge clk) begin
        if (rst) begin
            pc <= 32'h0;
            for (k = 0; k < 32; k = k + 1)
                x[k] <= 32'h0;
        end else begin
            if (do_wb && (rd != 0))
                x[rd] <= wb_data;

            pc <= pc_next;

            x[0] <= 32'h0;
        end
    end

endmodule
