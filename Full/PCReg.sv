module PCReg #(
    parameter   WIDTH = 32
)(
    //interface signals
    input logic              clk,
    input logic              rst,
    input logic [WIDTH-1:0]  next_pc, //PCReg acts like a flipflop register to store the next value for next cycle
    output logic [WIDTH-1:0] pc,
);

always_ff @ (posedge clk)
    // if rst is enabled, PC is 0, else it will be next_pc
    if (rst) pc <= {WIDTH{1'b0}};
    else     pc <= next_pc;

//Standard flipflop register, I increment on the top level but there is probably an adder to do that instead

endmodule
