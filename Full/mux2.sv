module mux2 #(
    parameter   WIDTH = 32,
)(
    input logic [WIDTH-1:0]     one,
    input logic [WIDTH-1:0]     zero,
    input logic                 condition,
    output logic [WIDTH-1:0]    output
);

assign output = condition ? one : zero; //Conditional if PCsrc true = branch_pc, else = inc_pc
// Very standard mux2, 32 bits

endmodule
