module imem #(
    parameter ADDRESS_WIDTH = 32,
              DATA_WIDTH = 32
)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0] read
);

logic [ADDRESS_WIDTH-1:0] rom_array [2**10:0] //2^32 is too big and unnecessary so reduce to 1024

initial begin
    $readmemh("instruction.mem",rom_array);
end;

always_comb begin
   assign read = rom_array[addr];
end

endmodule
