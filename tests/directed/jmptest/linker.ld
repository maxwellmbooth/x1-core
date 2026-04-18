OUTPUT_ARCH(riscv)
OUTPUT_FORMAT("elf32-littleriscv")
ENTRY(_start)

MEMORY
{
	ROM (rx) : ORIGIN = 0x00000000, LENGTH = 256K
}

SECTIONS
{
	.text : {
		KEEP(*(.text.init))
		*(.text*)
		. = ALIGN(4);
	} > ROM

	.rodata : {
		*(.rodata*)
		*(.srodata*)
		. = ALIGN(4);
	} > ROM
}
