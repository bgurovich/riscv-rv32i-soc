.section .text
.globl _start

_start:
    # Stack at top of 64KB RAM
    lui  sp, 0x10          # 0x00010000
    addi sp, sp, -16

    # Global pointer required by GCC for small-data / literals
    la   gp, __global_pointer$

    call main
1:  j 1b
