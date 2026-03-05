# x1-core - A RISC-V RV32 SystemVerilog Core Design
## Overview:
x1-core is an unprivileged RV32I core written in SystemVerilog using Sigasi SVH/VS-Code for design,
Quartus for compilation and Questa for simulation (with upcoming support for Xilinx/Vivado).
## Features:
- Full RV32I implementation
- Pipelined core with 5 stages: IF, ID, EX, MEM, WB
- External IMEM support
## To-do:
- Implement privilege
- Add MC extensions
- Add memory controller
## Other information
### NOP
NOP is implemented as `addi x0, x0, 0` (`0x00000013`)