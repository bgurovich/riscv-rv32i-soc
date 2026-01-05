#include "Vtop_soc.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <cstdint>
#include <iostream>

static vluint64_t main_time = 0;
double sc_time_stamp() {return main_time; }

static void tick(Vtop_soc* top, VerilatedVcdC* tfp) {
    top->clk = 0;
    top->eval();
    if (tfp) tfp->dump(main_time);
    main_time++;

    top->clk = 1;
    top->eval();
    if (tfp) tfp->dump(main_time);
    main_time++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Enable tracing globally
    Verilated::traceEverOn(true);

    auto* top = new Vtop_soc;

    // Always dump waves when built with --trace
    auto* tfp = new VerilatedVcdC;
    top->trace(tfp, 99); // deep hierarchy
    tfp->open("waves.vcd");

    top->rst = 1;
    for (int i = 0; i < 10; i++) tick(top, tfp);
    top->rst = 0;

    // Run enough cycles for hello message / tests
    for (int i = 0; i < 200000; i++){
        tick(top, tfp);
        if (Verilated::gotFinish()) break;
    }

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
