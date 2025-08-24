import common_pkg::*;

module stage_id (
  input logic clk, rst,
  input if_id_t if_id,
  input logic [XLEN-1:0] rs1_data, rs2_data,
  
  output logic [4:0] rs1_addr, rs2_addr,
  output id_ex_t id_ex
);

  function automatic logic [XLEN-1:0] imm_gen (
    input logic [31:0] instr,
    input instr_type_t instr_type
  );
    unique case (instr_type)
      INSTR_R_TYPE: return 32'd0;
      INSTR_I_TYPE: return {{20{instr[31]}}, instr[31:20]};
      INSTR_S_TYPE: return {{20{instr[31]}}, instr[31:25], instr[11:7]};
      INSTR_B_TYPE: return {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
      INSTR_U_TYPE: return {instr[31:12], 12'd0};
      INSTR_J_TYPE: return {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};
      INSTR_OTHER: return 32'd0;
    endcase
  endfunction
  
  assign rs1_addr = if_id.instr[19:15];
  assign rs2_addr = if_id.instr[24:20];
  
  ctrl_signals_t ctrl_signals;
  instr_type_t instr_type;
  logic eraise, illegal; //NOT FULLY IMPLEMENTED
  
  control_unit control_unit_inst (
    .opcode(if_id.instr[6:0]),
    .funct3(if_id.instr[14:12]),
    .funct7(if_id.instr[31:25]),
    .ctrl_signals(ctrl_signals),
    .instr_type(instr_type),
    .eraise(eraise),
    .illegal(illegal)
  );
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      id_ex <= '0;
    end else begin
      id_ex.instr <= if_id.instr;
      id_ex.pc <= if_id.pc;
      id_ex.ctrl_signals <= ctrl_signals;
      id_ex.rs1_data <= rs1_data;
      id_ex.rs2_data <= rs2_data;
      id_ex.rd_addr <= if_id.instr[11:7];
      id_ex.shamt <= rs2_addr;
      id_ex.imm <= imm_gen(if_id.instr, instr_type);
    end
  end
  
endmodule