module regfile  
    import riscv_pkg::*;
(
    input logic clk_i, rst_i,
    input logic [4:0] rs1_addr_i, rs2_addr_i, rd_addr_i,
    input logic [XLEN-1:0] rd_data_i,
    input logic rd_we_i,
    
    output logic [XLEN-1:0] rs1_data_o, rs2_data_o
);
    
    logic [XLEN-1:0] regs [0:31];
    
    always_comb begin
        if (rs1_addr_i == '0) begin
            rs1_data_o = '0;
        end else if (rd_we_i && (rd_addr_i == rs1_addr_i)) begin
            rs1_data_o = rd_data_i;
        end else begin
            rs1_data_o = regs[rs1_addr_i];
        end

        if (rs2_addr_i == '0) begin
            rs2_data_o = '0;
        end else if (rd_we_i && (rd_addr_i == rs2_addr_i)) begin
            rs2_data_o = rd_data_i;
        end else begin
            rs2_data_o = regs[rs2_addr_i];
        end
    end
    
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            for (int i = 0; i < 32; i++) begin
                regs[i] <= '0;
            end
        end else begin
            if (rd_we_i && (rd_addr_i != 5'd0)) begin
                regs[rd_addr_i] <= rd_data_i;
            end
        end
    end
    
endmodule