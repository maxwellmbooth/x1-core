# x1-core - A RISC-V RV32 SystemVerilog Core Design
## Overview:
x1-core is a RV32I core written in SystemVerilog using Sigasi SVH/VS Code for design,
Quartus for compilation and Questa for simulation (with upcoming support for Xilinx/Vivado).
## Features:
- Pipelined core with 5 stages: IF, ID, EX, MEM, WB
- Full RV32I implementation
## To-do:
- Stalling on exception/syscall
- Add MC extensions
## Other information
### NOP
NOP is implemented as `addi x0, x0, 0` (`0x00000013`)