module mux2 #(
    parameter   WIDTH = 32
)(
    input logic [WIDTH-1:0]     branch_pc,
    input logic [WIDTH-1:0]     inc_pc,
    input logic                 PCsrc,
    output logic [WIDTH-1:0]    next_pc
);

assign next_pc = PCsrc ? branch_pc : inc_pc; //Conditional if PCsrc true = branch_pc, else = inc_pc
// Very standard mux2, 32 bits

endmodule
