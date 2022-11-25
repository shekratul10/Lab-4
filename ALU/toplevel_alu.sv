module alu #(
    parameter ADDRESS_WIDTH = 5,
              ALU_INST_WIDTH = 1,
              DATA_WIDTH = 32,
            
)(
    input logic [ADDRESS_WIDTH-1:0] Immop,
    input logic WE3,
    input logic ALUsrc,
    input logic [ALU_INST_WIDTH-1:0] ALUctrl,
    input logic [ADDRESS_WIDTH-1:0] addr1,
    input logic [ADDRESS_WIDTH-1:0] addr2,
    input logic [ADDRESS_WIDTH-1:0] addr3,
    output logic [DATA_WIDTH-1:0] a0,
    output logic eq
);

logic [DATA_WIDTH-1:0] ALUop1, ALUop2, regOp2, ALUout;

regfile alu_reg (
    .clk (clk),
    .addr1 (rs1),
    .addr2 (rs2),
    .addr3 (rd),
    .WE3 (RegWrite),
    .WD3 (ALUout),
    .dout1 (ALUop1),
    .dout2 (regOp2),
    .a0 (a0)
);

alusrc alusrc (
    .regOp2 (regOp2),
    .ImmOp (ImmOp),
    .ALUsrc (ALUsrc),
    .ALUop2 (ALUop2)
);

aluctrl alu (
    .ALUop1 (ALUop1),
    .ALUop2 (ALUop2),
    .ALUctrl (ALUctrl),
    .ALUout(ALUout),
    .eq (eq)
);

endmodule


