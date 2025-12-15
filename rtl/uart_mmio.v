module uart_mmio (
    input  wire        clk,
    input  wire        rst,
    input  wire        we,
    input  wire [3:0]  wstrb,
    input  wire [31:0] wdata
);
    wire [7:0] ch = wdata[7:0]; // SW path (what C uses)

    always @(posedge clk) begin
        if (!rst && we) begin
            $write("%c", ch);
            $fflush();
        end
    end
endmodule
