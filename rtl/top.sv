import common_pkg::*;

module top (
  input logic clk_i, rst_i
);
  
  mem_req_t imem_req;
  mem_rsp_t imem_rsp;

  core core_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .imem_rsp_i(imem_rsp),
    .imem_req_o(imem_req)
  );

  // ROM instance
  rom rom_inst (
    .clk_i(clk_i),
    .mem_req_i(imem_req),
    .mem_rsp_o(imem_rsp)
  );

  // // RAM instance
  // ram ram_inst (
  //   .clk_i(clk),
  //   .we_i(mem_we),
  //   .addr_i(ex_mem_i.alu_q),
  //   .data_i(data_in),
  //   .data_o(data_out)
  // );

endmodule