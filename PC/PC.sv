module PC #(
    parameter   WIDTH = 32,
)(
    // interface signals
    input logic                 clk,
    input logic [WIDTH-1:0]     pc,
    input logic                 rst,
    input logic [WIDTH-1:0]     ImmOp,
    input logic                 PCsrc,
    output logic [WIDTH-1:0]    next_pc,
);

    logic [WIDTH-1:0]         mux_output;

mux2 mux (
    .branch_pc(pc[WIDTH-1:7], ImmOp),
    .inc_pc(pc+{32'b100}),
    .PCsrc(PCsrc),
    .next_pc(mux_output)
);


PCReg pcreg (
    .clk (clk),
    .rst (rst),
    .pc (mux_output),
    .next_pc (next_pc)
);

endmodule
