# RV32I RISC-V SoC

A bare-metal RV32I RISC-V system-on-chip implemented in Verilog and verified
using Verilator. The SoC includes a custom CPU core, byte-addressed RAM,
and a memory-mapped UART for C bring-up.

## Features
- 2-stage pipeline (IF / EX+WB) with control-flow flush
- RV32IM subset: RV32I + MUL (multi-vyvle execution with stall/busy)
- Byte-addressed RAM w/byte strobes (SB/SH/SW)
- UART MMIO TX @ 0x1000_0000
- Bare-metal firmware built with riscv64-unknown-elf-gcc + custom linker script
- Verified in Verilator with C bring-up + instruction tests

## Memory Map
| Region | Address Range |
|------|---------------|
| RAM | `0x0000_0000 – 0x0000_FFFF` |
| UART TX | `0x1000_0000` |

## Run
```bash
make sim

## Waveforms
<p align="center">
    <img src="images/pipeline_flow.png" width="900">
</p>

<p align="center">
    <em>Figure 1 - 2-stage pipeline execution showing fetch, execute, and writeback.</em>
</p>
