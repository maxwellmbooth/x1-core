OUTPUT_ARCH("riscv")
ENTRY(rvtest_entry_point)

MEMORY {
    ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 256K
    RAM (rwx) : ORIGIN = 0x00040000, LENGTH = 256K
}

SECTIONS {
    .text.init : { *(.text.init) } > ROM
    .text      : { *(.text) }      > ROM
    .rodata    : { *(.rodata) }    > ROM
    .tohost    : { *(.tohost) }    > RAM
    .data      : { *(.data) }      > RAM
    .data.string : { *(.data.string) } > RAM
    .bss       : { *(.bss) }       > RAM
    _end = .;
}
