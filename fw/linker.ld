ENTRY(_start)

MEMORY {
  RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 64K
}

SECTIONS {
  . = ORIGIN(RAM);

  .text : {
    *(.text .text.*)
    *(.rodata .rodata.*)
    *(.srodata .srodata.*)
  } > RAM

  .data : {
    *(.sdata .sdata.*)
    *(.data .data.*)
  } > RAM

  /* gp should point near small-data */
  PROVIDE(__global_pointer$ = . + 0x800);

  .bss (NOLOAD) : {
    *(.sbss .sbss.*)
    *(.bss .bss.*)
    *(COMMON)
  } > RAM

  . = ALIGN(4);
  _end = .;
}
