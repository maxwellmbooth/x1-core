`timescale 1ns/1ps

module core_tb;
  
  logic clk, rst;
  logic [31:0] pc;
  
  core core_inst (
    .clk(clk),
    .rst(rst),
    .pc(pc)
  );
  
  initial begin
    clk = 1'b0;
    
    #5 rst = 1'b1;
    #5 rst = 1'b0;
    
    repeat(10) begin
      #5 clk = 1'b1;
      #5 clk = 1'b0;
    end
    
    $stop;
  end
  
endmodule