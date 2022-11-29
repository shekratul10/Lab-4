module regfile #(
    parameter ADDRESS_WIDTH = 5, //32 regs, so 5 bits add size
              DATA_WIDTH = 32 //32-bit data

)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] addr1, //arithmetic operation
    input logic [ADDRESS_WIDTH-1:0] addr2, //arithmetic operation
    input logic [ADDRESS_WIDTH-1:0] addr3, //destination register
    input logic WE3, //register enable
    input logic [DATA_WIDTH-1:0] WD3, //data in
    output logic [DATA_WIDTH-1:0] dout1, //32-bit word outputted to ALU
    output logic [DATA_WIDTH-1:0] dout2, //32-bit word outputted to ALU
    output logic [DATA_WIDTH-1:0] a0 //outputs data stored in a0 reg
);

logic [DATA_WIDTH-1:0] regfile_array [2**ADDRESS_WIDTH-1:0];

initial 
    for (int i=0; i< $size(regfile_array); i++)
        regfile_array[i] = 32'b0;

always_comb begin
    a0 =  regfile_array[10];
    dout1 = regfile_array[addr1];
    dout2 = regfile_array[addr2];
    end

always_ff @(posedge clk)
    if (WE3) regfile_array[addr3] <= WD3;

endmodule 


