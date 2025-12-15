#include "Vtop_soc.h"
#include "verilated.h"
#include <cstdint>
#include <iostream>

static void tick(Vtop_soc* top, vluint64_t& t) {
    top->clk = 0; top->eval(); t++;
    top->clk = 1; top->eval(); t++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* top = new Vtop_soc;
    vluint64_t t = 0;

    top->rst = 1;
    for (int i = 0; i < 10; i++) tick(top, t);
    top->rst = 0;

    // Run enough cycles for hello message
    for (int i = 0; i < 200000; i++) tick(top, t);

    delete top;
    return 0;
}
