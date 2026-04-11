# Changelog 1

Initial creation of the x1-core RV32I processor. All core RTL modules written from scratch:

- Created the 5-stage pipeline (IF, ID, EX, MEM, WB stages)
- Created the ALU supporting 11 operations (ADD, SUB, SLT, SLTU, AND, OR, XOR, SLL, SRL, SRA)
- Created the control unit decoding all RV32I opcodes into control signals
- Created the register file (32 x 32-bit registers, x0 hardwired to zero)
- Created instruction ROM and data RAM modules
- Created the program counter module
- Defined all shared types, enums, and pipeline register structs in a common package
- Created a basic testbench
- Added the hex generator utility for producing program.hex files
- Added Quartus project files for FPGA targeting
