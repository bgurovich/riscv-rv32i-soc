# RV32I RISC-V SoC

A bare-metal RV32I RISC-V system-on-chip implemented in Verilog and verified
using Verilator. The SoC includes a custom CPU core, byte-addressed RAM,
and a memory-mapped UART for C bring-up.

## Features
- RV32I single-cycle CPU core
- Byte-addressed RAM with byte strobes
- UART MMIO @ `0x1000_0000`
- Bare-metal C toolchain (`riscv64-unknown-elf-gcc`)
- Verilator simulation
- Automated bring-up tests (ALU + load/store)

## Memory Map
| Region | Address Range |
|------|---------------|
| RAM | `0x0000_0000 – 0x0000_FFFF` |
| UART TX | `0x1000_0000` |

## Run
```bash
make sim
