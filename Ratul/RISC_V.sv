module RISC_V #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

<<<<<<< HEAD
 wire [WIDTH-1:0] PC;
 wire [WIDTH-1:0] instr;
 wire [WIDTH-1:0] ImmOp;
 wire             RegWrite;
 wire [2:0]       ALUctrl;
 wire             ALUsrc;
 wire [1:0]       ImmSrc;
 wire             PCsrc;
 wire             EQ;
=======
 logic [WIDTH-1:0] PC;
 logic [WIDTH-1:0] instr;
 logic [WIDTH-1:0] ImmOp;
 logic             RegWrite;
 logic [2:0]       ALUctrl;
 logic             ALUsrc;
 logic [1:0]       ImmSrc;
 logic             PCsrc;
 logic             EQ;
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)

PC PgrC(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .ImmOp(ImmOp),
    .pc (PC)
);

imem INSTR(
    .addr(PC[9:0]),
    .read(instr)
);

controlunit CU(
    .instr(instr),
    .EQ(EQ),
    .ALUctrl(ALUctrl),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)

);

signextend SE (
    .instr(instr[31:7]),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

<<<<<<< HEAD
topAlu Alu (
    .clk(clk),
    .Immop(ImmOp),
=======
topAlu Alu ( 
    .clk(clk),
    .ImmOp(ImmOp),
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .addr1(instr[19:15]),
    .addr2(instr[24:20]),
    .addr3(instr[11:7]),
<<<<<<< HEAD
    .eq(EQ),
=======
    .EQ(EQ),
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
    .a0(a0)
);



endmodule
