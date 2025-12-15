module top_soc (
    input wire clk,
    input wire rst
);
    // CPU <--> instr
    wire [31:0] i_addr;
    wire [31:0] i_rdata;

    // CPU <--> data
    wire d_we;
    wire [3:0] d_wstrb;
    wire [31:0] d_addr;
    wire [31:0] d_wdata;
    wire [31:0] d_rdata;

    // UART write detect (MMIO)
    wire uart_we = d_we && ((d_addr & 32'hFFFF_FFFC) == 32'h1000_0000);

/*
    integer ucnt;
    initial ucnt = 0;

    always @(posedge clk) begin
        if (uart_we && ucnt < 40) begin
            $display("UART write: addr=%08x wstrb=%b wdata=%08x", d_addr, d_wstrb, d_wdata);
            ucnt <= ucnt + 1;
        end
    end
    */


    /*
    // RAM is everything below 64KB
    wire ram_sel = (d_addr < 32'h0001_0000);

    wire [31:0] ram_rdata;
    assign d_rdata = ram_sel ? ram_rdata : 32'h0;
    */

    wire [31:0] ram_rdata;

    // For now, only RAM reads are supported (MMIO reads return 0).
    // This avoids a combinational loop with single-cycle LOAD logic.
    assign d_rdata = ram_rdata;

    wire ram_sel = (d_addr < 32'h0001_0000);

    rv32i_core u_cpu (
        .clk(clk),
        .rst(rst),
        .i_addr(i_addr),
        .i_rdata(i_rdata),
        .d_we(d_we),
        .d_wstrb(d_wstrb),
        .d_addr(d_addr),
        .d_wdata(d_wdata),
        .d_rdata(d_rdata)
    );

    simple_ram_dp #(.BYTES(65536), .MEMFILE("fw/fw.hex")) u_ram (
        .clk(clk),
        .i_addr(i_addr),
        .i_rdata(i_rdata),
        .d_we(d_we && ram_sel),
        .d_wstrb(d_wstrb),
        .d_addr(d_addr),
        .d_wdata(d_wdata),
        .d_rdata(ram_rdata)
    );

    uart_mmio u_art (
        .clk(clk),
        .rst(rst),
        .we(uart_we),
        .wstrb(d_wstrb),
        .wdata(d_wdata)
    );
endmodule
