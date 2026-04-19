parameter int RAM_ADDR_WIDTH = 16;
parameter int RAM_DATA_WIDTH = 32;
parameter int RAM_DEPTH = 1 << RAM_ADDR_WIDTH;


module ram (
  input logic clk_i,
  input logic we_i,
  input logic [31:0] addr_i,
  input logic [RAM_DATA_WIDTH-1:0] data_i,
  
  output logic [RAM_DATA_WIDTH-1:0] data_o
);

  logic [RAM_DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1] /* verilator public_flat_rd */;
  

  // using mem[{(addr_i - 32'h00040000)}[17:2]] to separate address space from ROM
  always_ff @(posedge clk_i) begin
    if (we_i) begin
      mem[{(addr_i - 32'h00040000)}[17:2]] <= data_i;
      data_o <= data_i;
    end else begin
      data_o <= mem[{(addr_i - 32'h00040000)}[17:2]];
    end
  end

endmodule