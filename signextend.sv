module signextend #(
    input logic [31:0] instr,
    input logic  Immsrc,
    output logic [31:0] Immop
);

always_comb begin
    if (Immsrc == 1b'0)
       assign Immop = {20{instr[31]},instr[31:20]};
    else
       assign Immop = {20{instr[31]},instr[31:25],instr[11:7]};
end

endmodule
