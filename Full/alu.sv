module alu #(
    parameter WIDTH = 32
)(
    //Following lab 4 ALU input/outputs
    input logic [DATA_WIDTH-1:0]    ALUop1,
    input logic [DATA_WIDTH-1:0]    ALUop2,
    input logic                     ALUctrl, // 3 bits from control unit
    output logic [DATA_WIDTH-1:0]   ALUout,
    output logic                    eq //This is equals for if the 2 ALUops are equal? Unsure
);

always_comb
    case (ALUctrl)
       /* 3'b000: ALUout = ALUop1 + ALUop2; //Add
        3'b001: ALUout = ALUop1 - ALUop2; //Subtract, This very likely might be wrong
        3'b010: ALUout = ALUop1 & ALUop2; //AND
        3'b011: ALUout = ALUop1 | ALUop2; //OR
        3'b101: ALUout = ALUop1 < ALUop2 ? 1 : 0; //Set Less than (SLT), not sure what this means but it's from lecture 6*/
        1'b0: ALUout = {1'b0};
        1'b1: ALUout = {1'b1};
        default: ALUout = {32'b0}; //Again default case in unsure, it should be most likely but idk what that is so it's 0 for NOP?
        //There is others to add but these are the ones on lecture notes
    endcase*/


assign eq = (ALUop1 == ALUop2); //So not sure what equal means, is that Op1==Op2? So should this syntax work?

endmodule
