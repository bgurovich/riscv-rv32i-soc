# RV32IM RISC-V System-on-Chip (SoC)

A bare-metal **RV32IM RISC-V system-on-chip** implemented in **synthesizable Verilog** and verified using **Verilator**. 
The design features a custom pipelined CPU core, byte-addressable RAM, and a memory-mapped UART, capable of running real C programs compiled with `riscv64-unknown-elf-gcc`.

This project was built to demonstrate **RTL design, pipeline control, multi-cycle execution, and SoC integration**

---

## ✨ Features

- **Custom RV32IM CPU core**
  - RV32I base ISA + RV32M (`MUL`)
  - Single-issue, in-order execution
- **2-stage pipeline**
  - Instruction Fetch (IF)
  - Execute + Memory + Writeback (EX/WB)
  - Control-flow resolved in EX stage
  - Correct pipeline flush and bubble insertion
- **Multi-cycle MUL unit**
  - Fixed-latency (4-cycle) execution
  - Pipeline stall during MUL
- **Memory system**
  - Byte-addressable RAM
  - Byte strobes supported (`SB`, `SH`, `SW`)
  - Combinational data reads for single-cycle loads
- **UART MMIO**
  - TX-only UART mapped at `0x1000_0000`
  - Used for all firmware output
- **Bare-metal firmware**
  - Custom startup assembly and linker script
  - C bring-up tests and instruction verification
- **Full simulation & verification**
  - Verilator-based C++ testbench
  - GTKWave waveform inspection

---

## 🧠 High-Level Architecture

    +-------------------+
    |   RV32IM CPU      |
    |  (2-stage pipe)   |
    +---------+---------+
              |
              | instr + data
              |
    +---------v---------+
    |   RAM (64 KB)     |
    | byte-addressable  |
    +---------+---------+
              |
              | MMIO
              |
    +---------v---------+
    |   UART TX         |
    | 0x1000_0000       |
    +-------------------+

> Instruction fetch and data access share a simple memory system.  
> UART output is handled through memory-mapped I/O.

---

## 🗂️ Repository Structure

    riscv-soc/
    ├── rtl/
    │   ├── rv32i_core.v      # 2-stage pipelined RV32IM CPU
    │   ├── top_soc.v         # CPU + RAM + UART integration
    │   ├── simple_ram_dp.v  # Byte-addressable RAM with strobes
    │   └── uart_mmio.v       # UART TX MMIO peripheral
    │
    ├── fw/
    │   ├── start.S           # Reset entry + C runtime jump
    │   ├── tests.c           # Bring-up & instruction tests
    │   ├── linker.ld         # Bare-metal memory layout
    │   └── fw.hex            # Verilog memory image (generated)
    │
    ├── tb/
    │   └── tb_soc.cpp        # Verilator C++ testbench
    │
    ├── images/               # GTKWave screenshots
    ├── Makefile
    └── obj_dir/              # Verilator output (generated)

---

## 🧩 Memory Map
| Region | Address Range |
|------|---------------|
| RAM | `0x0000_0000 – 0x0000_FFFF` |
| UART TX | `0x1000_0000` |

---

## 🧪 Verification & Waveforms

The design is verified using **Verilator** with real RISC-V firmware.  
Waveforms were captured in **GTKWave** to validate pipeline behavior, control flow, and multi-cycle execution.

### 🎨 Waveform Color Legend

| Color | Meaning |
|------|--------|
| 🟢 Green | Program counter and instruction flow |
| 🟣 Purple| Writeback / architectural state updates |
| 🔴 Red | Control-flow events (branch taken, MUL start) |
| 🟡 Yellow | Stall or multi-cycle execution state |
| 🔵 Blue | Memory and MMIO side effects |

---

### 🔹 2-Stage Pipeline Execution

<p align="center">
  <img src="images/pipeline_flow.png" width="900">
</p>

<p align="center">
  <em>
  Figure 1 – Straight-line instruction execution in a 2-stage RV32IM pipeline.
  Instructions are fetched, executed, and written back in-order.
  </em>
</p>

---

### 🔹 Branch Resolution and Pipeline Flush

<p align="center">
  <img src="images/branch_flush.png" width="900">
</p>

<p align="center">
  <em>
  Figure 2 – Branch resolved in the EX stage. When <code>ex_taken</code> is asserted,
  the PC is redirected and the wrong-path instruction is squashed via a NOP bubble.
  </em>
</p>

---

### 🔹 Multi-Cycle MUL Stall (RV32M)

<p align="center">
  <img src="images/mul_stall.png" width="900">
</p>

<p align="center">
  <em>
  Figure 3 – Multi-cycle <code>MUL</code> instruction stalls the pipeline for 4 cycles.
  The program counter and pipeline registers are held constant until completion.
  </em>
</p>

---

## Build & Run

### Requirements
- `riscv64-unknown-elf-gcc`
- Verilator
- GTKWave (optional, for waveform viewing)

### Run Simulation
```bash
make sim
```

### View Waveforms
```bash
make wave
```

## Edample Firmware Output
```
RV32I bring-up tests
add: PASS
sub: PASS
xor: PASS
and: PASS
or: PASS
lbu0: PASS
lbu1: PASS
branch/flush: PASS
load-use: PASS
mul: PASS
mulneg: PASS
nulstall: PASS
DONE
```
---

## Future Work
- Forwarding unit
- Timer MMIO
- Interrupt support
- Intruction cache
- ASIC-style synthesis flow (Yosys)

