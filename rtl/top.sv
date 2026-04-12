import common_pkg::*;

module top (
  input logic clk_i, rst_i
);
  
  mem_req_t imem_req;
  mem_rsp_t imem_rsp;

  mem_req_t dmem_req;
  mem_rsp_t dmem_rsp;

  logic imem_req_valid;
  logic imem_req_ready;

  logic imem_rsp_valid;
  logic imem_rsp_ready;

  logic dmem_req_valid;
  logic dmem_req_ready;
  
  logic dmem_rsp_valid;
  logic dmem_rsp_ready;

  core core_inst (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .imem_rsp_valid_i(imem_rsp_valid),
    .imem_req_ready_i(imem_req_ready),
    .imem_rsp_i(imem_rsp),
    .dmem_rsp_i(dmem_rsp),
    .imem_req_valid_o(imem_req_valid),
    .imem_rsp_ready_o(imem_rsp_ready),
    .imem_req_o(imem_req),
    .dmem_req_o(dmem_req)
  );

  // ROM instance
  rom rom_inst (
    .clk_i(clk_i),
    .mem_req_valid_i(imem_req_valid),
    .mem_rsp_ready_i(imem_rsp_ready),
    .mem_req_i(imem_req),
    .mem_rsp_valid_o(imem_rsp_valid),
    .mem_req_ready_o(imem_req_ready),
    .mem_rsp_o(imem_rsp)
  );

  // RAM instance
  // ram ram_inst (
  //   .clk_i(clk_i),
  //   .mem_req_i(dmem_req),
  //   .mem_rsp_o(dmem_rsp)
  // );

endmodule