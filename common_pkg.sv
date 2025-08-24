package common_pkg;
  parameter int XLEN = 32;
  parameter logic [XLEN-1:0] PC_RESET = 32'd0;
 
 
  //rv32i opcodes
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
  
  //instruction types
  typedef enum logic[2:0] {
    INSTR_R_TYPE,
    INSTR_I_TYPE,
    INSTR_S_TYPE,
    INSTR_B_TYPE,
    INSTR_U_TYPE,
    INSTR_J_TYPE,
    INSTR_OTHER
  } instr_type_t;
  
  //alu operations
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
  
  //branch operations
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
  
  //store operations
  typedef enum logic[1:0] {
    STORE_INVALID,
    STORE_BYTE,
    STORE_HALF,
    STORE_WORD
  } store_op_t;
  
  //load operations
  typedef enum logic[2:0] {
    LOAD_INVALID,
    LOAD_BYTE,
    LOAD_BYTEU,
    LOAD_HALF,
    LOAD_HALFU,
    LOAD_WORD
  } load_op_t;
  
  //alu a mux options
  typedef enum logic {
    ALU_A_SEL_RS1,
    ALU_A_SEL_PC
  } alu_a_sel_t;
  
  //alu b mux options
  typedef enum logic [1:0] {
    ALU_B_SEL_RS2,
    ALU_B_SEL_IMM,
    ALU_B_SEL_SHAMT
  } alu_b_sel_t;
  
  //rd mux options
  typedef enum logic[1:0] {
   RD_SEL_ALU,
   RD_SEL_IMM,
	 RD_SEL_MEM,
	 RD_SEL_PC
  } rd_sel_t;
  
  //pc redirect
  typedef struct packed {
    logic valid;
    logic [XLEN-1:0] target;
  } pc_redirect_t;
  
  //control signals per instruction
  typedef struct packed {
    alu_a_sel_t alu_a_sel;
    alu_b_sel_t alu_b_sel;
    alu_op_t alu_op;
    branch_op_t branch_op;
    store_op_t store_op;
    load_op_t load_op;
    rd_sel_t rd_sel;
    logic rd_we;
    logic mem_we;
  } ctrl_signals_t;
  
  //if to id stage
  typedef struct packed {
    logic [XLEN-1:0] instr;
    logic [XLEN-1:0] pc;
  } if_id_t;
  
  //id to ex stage
  typedef struct packed {
    logic [XLEN-1:0] instr;
    logic [XLEN-1:0] pc;
    ctrl_signals_t ctrl_signals;
    logic [XLEN-1:0] rs1_data, rs2_data;
    logic [4:0] rd_addr;
    logic [4:0] shamt;
    logic [XLEN-1:0] imm;
  } id_ex_t;
  
  //ex to mem stage
  typedef struct packed {
    logic [XLEN-1:0] instr;
    logic [XLEN-1:0] pc;
    ctrl_signals_t ctrl_signals;
    logic [XLEN-1:0] rs2_data;
    logic [4:0] rd_addr;
    logic [XLEN-1:0] imm;
    logic [XLEN-1:0] alu_q;
  } ex_mem_t;
  
  //mem to wb stage
  typedef struct packed {
    logic [XLEN-1:0] instr;
    logic [XLEN-1:0] pc;
    ctrl_signals_t ctrl_signals;
    logic [4:0] rd_addr;
    logic [XLEN-1:0] imm;
    logic [XLEN-1:0] alu_q;
    logic [XLEN-1:0] mem_data;
  } mem_wb_t;
  
endpackage