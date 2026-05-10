package riscv_pkg;
  // PARAMETERS
  parameter int XLEN = 32;
  parameter logic [XLEN-1:0] PC_RESET = 32'd0;

  // ENUMS
  // RV32I opcodes
  typedef enum logic[6:0] {
    OP_LOAD = 7'b0000011,
    OP_STORE = 7'b0100011,
    OP_ALU_IMM = 7'b0010011,
    OP_ALU = 7'b0110011,
    OP_AUIPC = 7'b0010111,
    OP_LUI = 7'b0110111,
    OP_BRANCH = 7'b1100011,
    OP_JALR = 7'b1100111,
    OP_JAL = 7'b1101111,
    OP_SYSTEM = 7'b1110011
  } opcode_t;
  
  // Instruction types
  typedef enum logic[2:0] {
    INSTR_R_TYPE,
    INSTR_I_TYPE,
    INSTR_S_TYPE,
    INSTR_B_TYPE,
    INSTR_U_TYPE,
    INSTR_J_TYPE,
    INSTR_OTHER
  } instr_type_t;
  
  // ALU operations
  typedef enum logic[3:0] {
    ALU_INVALID,
    ALU_ADD,
    ALU_SUB,
    ALU_SLT,
    ALU_SLTU,
    ALU_SLL,
    ALU_SRL,
    ALU_SRA,
    ALU_OR,
    ALU_XOR,
    ALU_AND
  } alu_op_t;
  
  // Branch operations
  typedef enum logic[3:0] {
    BRANCH_INVALID,
    BEQ,
    BNE,
    BLT,
    BGE,
    BLTU,
    BGEU,
    JAL,
    JALR
  } branch_op_t;
  
  // Store operations
  typedef enum logic[1:0] {
    STORE_INVALID,
    STORE_BYTE,
    STORE_HALF,
    STORE_WORD
  } store_op_t;
  
  // Load operations
  typedef enum logic[2:0] {
    LOAD_INVALID,
    LOAD_BYTE,
    LOAD_BYTEU,
    LOAD_HALF,
    LOAD_HALFU,
    LOAD_WORD
  } load_op_t;
endpackage