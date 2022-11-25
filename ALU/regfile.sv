module regfile #(
    parameter ADDRESS_WIDTH = 5, //32 regs, so 5 bits add size
              DATA_WIDTH = 32, //32-bit data

)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] addr1, //arithmetic operation
    input logic [ADDRESS_WIDTH-1:0] addr2, //arithmetic operation
    input logic [ADDRESS_WIDTH-1:0] addr3, //destination register
    input logic WE3, //register enable
    input logic [DATA_WIDTH-1:0] WD3, //data in
    output logic [DATA_WIDTH-1:0] dout1, //32-bit word outputted to ALU
    output logic [DATA_WIDTH-1:0] dout2, //32-bit word outputted to ALU
    output logic [DATA_WIDTH1:0] a0 //outputs data stored in a0 reg
);

logic [DATA_WIDTH-1:0] regfile_array [0:2**ADDRESS_WIDTH-1];

always_ff @(posedge clk)
    dout1 <= regfile_array [addr1];
    dout2 <= regfile_array [addr2];
    if (en) begin
        regfile_array[addr3] = a0; 
    end

endmodule 


