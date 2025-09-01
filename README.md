# x1-core - A RISC-V RV32 SystemVerilog Core Design
## Features:
- Full RV32I implementation
## To-do:
- Forward RD values
- Stalling on exception/syscall
- Add MC extensions
## Other information
### NOP
NOP is implemented as `addi x0, x0, 0` (hex `0x00000013`)