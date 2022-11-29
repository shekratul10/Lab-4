module RISC_V #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

 wire [WIDTH-1:0] PC;
 wire [WIDTH-1:0] instr;
 wire [WIDTH-1:0] ImmOp;
 wire             RegWrite;
 wire [2:0]       ALUctrl;
 wire             ALUsrc;
 wire [1:0]       ImmSrc;
 wire             PCsrc;
 wire             EQ;

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

topAlu Alu (
    .clk(clk),
    .Immop(ImmOp),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .addr1(instr[19:15]),
    .addr2(instr[24:20]),
    .addr3(instr[11:7]),
    .eq(EQ),
    .a0(a0)
);



endmodule
