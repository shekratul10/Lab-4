module controlunit #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0] instr, //funct3 +opcode
    input logic  EQ,
    output logic ALUctrl, //can be 1 bit, selct either add or branching check instruction
    output logic RegWrite, //enable write result into register (i.e add)
    output logic ALUsrc, //select between reg or imm
    output logic Immsrc, // 1 bit select 
    output logic Pcsrc, //select incpc or branch_pc
    output logic ResultSrc, //1 bit to select read data or output alu 
    output logic MemWrite //write enable for data memory 1 bit
);

always_comb 
    begin
    assign ALUctrl = instr[6];// opcode starts with 0 -> add, 1-> branching
    assign Immsrc = instr[6]; // if add instr -> 0, if branching instr ->1
    assign RegWrite = !instr[6]; //if add -> enable write
    if (instr[6:5] == 2b'01)  assign ALUsrc = 0; //if R-type ->0 select reg
    else assign ALUsrc =1; //else I-type ->1 select immediate
    if (instr[6] == 1b'1 AND EQ ==0 ) assign PCsrc = 1; // if branching str and not eqal -> 1(jump) select branch_PC
    else assign PCsrc = 0; //else selct inc_pc
    assign ResultSrc, MemWrite = instr[13];//lw ->funct3 = 010 unique from add and branch 
    end
//need to add logic for challenge data memory
endmodule

