module imem #(
    parameter ADDRESS_WIDTH = 10,
              DATA_WIDTH = 8
)(
    //input logic clk,
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [4*DATA_WIDTH-1:0] read
);

logic [DATA_WIDTH-1:0] rom [2**ADDRESS_WIDTH-1:0]; //2^32 is too big and unnecessary so reduce to 1024

initial begin
    $readmemh("instruction.mem",rom);
end;

always_comb begin
   assign read = {{rom[addr]}, {rom[addr + 1]}, {rom[addr+2]}, {rom[addr+3]}};
end

endmodule
