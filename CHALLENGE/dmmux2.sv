module dm_mux2 #( //This is the mux for the data memory, again I could probably use 1 MUX with like consistent Input/Output instead
    parameter   WIDTH = 32,
)(
    input logic [WIDTH-1:0]     read_data,
    input logic [WIDTH-1:0]     ALUout,
    input logic                 ResultSrc,
    output logic [WIDTH-1:0]    result
);

assign result = ResultSrc ? read_data : ALUout; //Conditional if Read_data true = read_data, else = ALUout
// Very standard mux2, 32 bits but this is for the mux for result either, ALUresult skips or it gets data from data_memory

endmodule
