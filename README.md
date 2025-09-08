# x1-core - A RISC-V RV32 SystemVerilog Core Design
## Features:
- Full RV32I implementation
## To-do:
- Rename with \*_d/\*_q for regs and \*_i/\*_o for ports
- Add next for all pipeline regs
- rename flags to info
- Stalling on exception/syscall
- Add MC extensions
## Other information
### NOP
NOP is implemented as `addi x0, x0, 0` (`0x00000013`)