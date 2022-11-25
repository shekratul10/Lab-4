module alusrc #(
    parameter WIDTH = 32,

)(
    input logic [WIDTH-1:0] regOp2,
    input logic [WIDTH-1:0] ImmOp,
    input logic ALUsrc,
    output logic [WIDTH-1:0] ALUop2
);

assign ALUOp2 = ALUsrc ? ImmOp : regOp2;

endmodule 

