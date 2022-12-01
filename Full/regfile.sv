module regfile #(
    parameter   ADDRESS_WIDTH = 5,
    parameter   DATA_WIDTH = 32
)(
    //following the lecture 6 notes
    input logic                     clk, //doesn't seem to need rst but it might so I'm unsure on this too
    input logic [ADDRESS_WIDTH-1:0] ad1, //1 and 2 are address for read rs1 and rs2
    input logic [ADDRESS_WIDTH-1:0] ad2,
    input logic [ADDRESS_WIDTH-1:0] ad3, //3 is for write destination or rd
    input logic                     we3, //write enable
    input logic [DATA_WIDTH-1:0]    wd3, //write data
    output logic [DATA_WIDTH-1:0]   rd1, //rd1 and rd2 are outputs going to ALU/mux respectively
    output logic [DATA_WIDTH-1:0]   rd2,
    output logic [DATA_WIDTH-1:0]   a0 //not entirely sure about a0 but I assume 32 bits as each register should have 32 for data
);

logic [DATA_WIDTH-1:0] reg_array [2**ADDRESS_WIDTH-1:0]; //This stores the data for every register,32 registers in the lecture notes 

always_ff @ (posedge clk) //posedge to write, only negedge for pipelining register file. I think.
    if(we3)
        reg_array[ad3] <= wd3;

//Are these combinational so that read data available as soon as address is presented. I think they are but Idk.
always_comb begin
    rd1 = reg_array[ad1]; //uncommented out for now as I believe it's combinational.
    rd2 = reg_array[ad2];
    a0 = reg_array[5'd10]; //Entirely unsure about a0
end

endmodule
