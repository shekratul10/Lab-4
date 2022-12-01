module topAlu #(
    parameter ADDRESS_WIDTH = 5,
              //ALU_INST_WIDTH = 1,
              DATA_WIDTH = 32
            
)(
    input logic clk,
<<<<<<< HEAD
    input logic [DATA_WIDTH-1:0] Immop,
=======
    input logic [DATA_WIDTH-1:0] ImmOp,
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
    input logic RegWrite,
    input logic ALUsrc,
    input logic [2:0] ALUctrl,
    input logic [ADDRESS_WIDTH-1:0] addr1,
    input logic [ADDRESS_WIDTH-1:0] addr2,
    input logic [ADDRESS_WIDTH-1:0] addr3,
    output logic [DATA_WIDTH-1:0] a0,
<<<<<<< HEAD
    output logic eq
=======
    output logic EQ
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
);

logic [DATA_WIDTH-1:0] ALUop1;
logic [DATA_WIDTH-1:0] ALUop2;
logic [DATA_WIDTH-1:0] regOp2;
logic [DATA_WIDTH-1:0] ALUout;

regfile alu_reg (
    .clk (clk),
    .addr1 (addr1),
    .addr2 (addr2),
    .addr3 (addr3),
    .WE3 (RegWrite),
    .WD3 (ALUout),
    .dout1 (ALUop1),
    .dout2 (regOp2),
    .a0 (a0)
);

<<<<<<< HEAD
assign ALUop2 = ALUsrc ? Immop : regOp2;
=======
assign ALUop2 = ALUsrc ? ImmOp : regOp2;
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)

aluctrl alu (
    .ALUop1 (ALUop1),
    .ALUop2 (ALUop2),
    .ALUctrl (ALUctrl),
    .ALUout(ALUout),
<<<<<<< HEAD
    .eq (eq)
=======
    .EQ (EQ)
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
);

endmodule


