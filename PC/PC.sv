module PC #(
    parameter   WIDTH = 32,
)(
    //interface signals
    input logic                 clk,
    input logic [WIDTH-1:0]     pc,
    input logic                 rst,
    input logic [WIDTH-1:0]     ImmOp,
    input logic                 PCsrc,
    output logic [WIDTH-1:0]    next_pc,
);

    logic [WIDTH-1:0]         mux_output;

mux2 mux (
    .branch_pc(pc+ImmOp), //This could be made with a adder.sv file, also unsure if this is even right
    .inc_pc(pc+{32'b100}), //This increments it but again, I can just make an adder.sv file to do this
    .PCsrc(PCsrc),
    .next_pc(mux_output) // next_pc is now mux_output for the pcreg for next cycle
);


PCReg pcreg (
    .clk (clk),
    .rst (rst),
    .pc (mux_output), //gets the correct value from mux and then uses that as the pc for next cycle.
    .next_pc (next_pc)
);

//This is a "top level" but I am unsure if we can combine other "top levels" into one sv file so maybe add all separately

endmodule
