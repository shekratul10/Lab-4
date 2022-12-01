module instrmem #(
    parameter   ADDRESS_WIDTH = 32, //The instructions should be in 0x1000 which is 16 bits for the address? But 32 enter...
    parameter   DATA_WIDTH=32 //32 bit processor 
)(
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0]   rd
);

logic [DATA_WIDTH-1:0] instrmem_array [2**10-1:0]; //This means the 31:0 bits of instrmem for each address for (2^10)-1
// I am unsure if it should be 0:2**ADDRESS-1 or not because that would mean 0 to (2^10)-1? Also should (2^10)-1 be decreased?

initial begin
    $display("Loading instruction memory."); //Not sure how to type for the mem.mem file
    $readmemh("instrmem.mem", instrmem_array); //This should read from the instrmem.mem file to the
end;

assign rd = instrmem_array[addr]; //I think we don't need to say always_comb because it's only one instruction

endmodule
