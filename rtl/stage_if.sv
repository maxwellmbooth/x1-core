import common_pkg::*;

module stage_if (
  input logic clk_i, rst_i,
  input ctrl_if_t ctrl_if_i,
  input pc_redirect_t pc_redirect_i,

  output if_id_t if_id_o,
  output logic [XLEN-1:0] pc_o
);

  if_id_t if_id_d, if_id_q;
  
  logic [XLEN-1:0] pc;

  logic pc_we;
  assign pc_we = pc_redirect_i.valid || !ctrl_if_i.stall_if;

  logic [31:0] instr;
  
  program_counter program_counter_inst (
    .clk(clk_i),
    .rst(rst_i),
    .pc_we(pc_we),
    .pc_redirect(pc_redirect_i),
    .pc(pc)
  );
  
  logic [31:0] rom_addr;
  assign rom_addr = {24'd0, pc[9:2]};

  rom rom_inst (
    .clk(clk_i),
    .addr(rom_addr),
    .data(instr)
  );

  always_comb begin
    if_id_d = if_id_q;
    if (ctrl_if_i.flush_id) begin
      if_id_d = if_id_t'{default:'0};
    end else if (!ctrl_if_i.stall_hold_id) begin
      if_id_d = if_id_t'{
        valid: 1'b1,
        pc: pc,
        instr: instr
      };
    end
  end
  
  always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
      if_id_q <= '0;
    end else begin
      if_id_q <= if_id_d;
    end
  end
  
  assign pc_o = pc;
  assign if_id_o = if_id_q;

endmodule