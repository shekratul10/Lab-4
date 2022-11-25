module datamemory #( //So this should be basically RAM?
    parameter   ADDRESS_WIDTH = 32, //The instructions should be 32 bits, I'm separating anyways just in case
    parameter   DATA_WIDTH=32 //32 bit processor 
)(
    input logic                         clk, //Again feels like no rst but there is clk?
    input logic                         we,
    input logic [ADDRESS_WIDTH-1:0]     a,
    input logic [DATA_WIDTH-1:0]        wd,
    output logic [DATA_WIDTH-1:0]       rd
);
    
logic [DATA_WIDTH-1:0] datamem_array [2**ADDRESS_WIDTH-1:0]; //Again this feel way too large for the memory size but I will keep it

    always_ff @ (posedge clk) //is this negedge or posedge, we write on posedge right?
    if(we == 1'b1) //I think just if(we) is enough 
        datamem_array[a] <= wd;

assign rd = datamem_array[a]; //Unsure about this as well because I think it's meant to be blocking?
//In general, it is very familiar with previous instrmem and regfile which is just very read/write

endmodule
