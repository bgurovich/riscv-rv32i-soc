RISCV ?= riscv64-unknown-elf
CC_RISCV = $(RISCV)-gcc
OBJCOPY  = $(RISCV)-objcopy

FW_ELF = fw/fw.elf
FW_HEX = fw/fw.hex

VERILATOR = verilator
TOP = top_soc

all: sim

fw: $(FW_HEX)

$(FW_ELF): fw/start.S fw/tests.c fw/linker.ld
	$(CC_RISCV) -march=rv32im -mabi=ilp32 -nostdlib -ffreestanding \
	  -Wl,-T,fw/linker.ld fw/start.S fw/tests.c -o $(FW_ELF)

$(FW_HEX): $(FW_ELF)
	$(OBJCOPY) -O verilog $(FW_ELF) $(FW_HEX)

sim: fw
	$(VERILATOR) -Wall -Wno-UNUSEDSIGNAL -Wno-UNOPTFLAT --cc --exe --build \
	  --trace --trace-depth 99 \
	  -Irtl \
	  rtl/$(TOP).v rtl/rv32i_core.v rtl/simple_ram_dp.v rtl/uart_mmio.v \
	  tb/tb_soc.cpp \
	  -o sim.out
	./obj_dir/sim.out +MEMFILE=$(FW_HEX)

wave: sim
	gtkwave waves.vcd

clean:
	rm -rf obj_dir $(FW_ELF) $(FW_HEX) waves.vcd
