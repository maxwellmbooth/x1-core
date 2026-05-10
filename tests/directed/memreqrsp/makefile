prog.hex : prog.s linker.ld
	riscv64-unknown-elf-as -march=rv32i -mabi=ilp32 -o prog.o prog.s
	riscv64-unknown-elf-ld -m elf32lriscv -T linker.ld -o prog.elf prog.o
	riscv64-unknown-elf-objcopy -O binary prog.elf prog.bin
	{ od -An -tx4 -w4 -v prog.bin | tr -d ' '; yes 00000013; } | head -n 65536 > prog.hex
clean:
	rm -f prog.o prog.elf prog.bin prog.hex
