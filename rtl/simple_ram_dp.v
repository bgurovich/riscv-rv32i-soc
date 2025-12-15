module simple_ram_dp #(
    parameter integer BYTES = 65536,               // 64KB
    parameter [1023:0] MEMFILE = "fw/fw.hex"
)(
    input  wire        clk,

    // Instruction port (read-only)
    input  wire [31:0] i_addr,
    output wire [31:0] i_rdata,

    // Data port
    input  wire        d_we,
    input  wire [3:0]  d_wstrb,
    input  wire [31:0] d_addr,
    input  wire [31:0] d_wdata,
    output wire [31:0] d_rdata
);
    // Byte-addressed memory
    reg [7:0] mem8 [0:BYTES-1];

    // Load firmware bytes (supports @00000000 style)
    initial begin
        reg [1023:0] f;
        integer j;
        for (j = 0; j < BYTES; j = j + 1) mem8[j] = 8'h00;

        if ($value$plusargs("MEMFILE=%s", f)) begin
            $readmemh(f, mem8);
        end else begin
            $readmemh(MEMFILE, mem8);
        end
    end

    // Little-endian 32-bit word reads
    function [31:0] rd32(input [31:0] a);
    reg [31:0] aa;
    begin
        aa = {a[31:2], 2'b00}; // align down to 4-byte boundary
        if (aa + 3 < BYTES) begin
            rd32 = { mem8[aa+3], mem8[aa+2], mem8[aa+1], mem8[aa+0] };
        end else begin
            rd32 = 32'h0000_0013; // NOP
        end
    end
    endfunction


    assign i_rdata = rd32(i_addr);
    assign d_rdata = rd32(d_addr);

    // Writes (byte enables)
    always @(posedge clk) begin
        reg [31:0] aa;
        aa = {d_addr[31:2], 2'b00}; // align down
        if (d_we) begin
            if (aa < BYTES) begin
                if (d_wstrb[0]) mem8[aa + 0] <= d_wdata[7:0];
                if (d_wstrb[1] && (aa + 1 < BYTES)) mem8[aa + 1] <= d_wdata[15:8];
                if (d_wstrb[2] && (aa + 2 < BYTES)) mem8[aa + 2] <= d_wdata[23:16];
                if (d_wstrb[3] && (aa + 3 < BYTES)) mem8[aa + 3] <= d_wdata[31:24];
            end
        end
    end

endmodule
