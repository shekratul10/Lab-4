module signextend #(
    parameter   WIDTH = 32,
)(
    input logic [WIDTH-1:7]     Imm, //the last 7 are always opcode
    input logic           Immsrc, //2 bits are the first 4 necessary types, I S B R. There may be more types so I use 4 bits
    output logic [WIDTH-1:0]    ImmExt
);

always_comb
    case (Immsrc)
        /*3'b000:     ImmExt = {20{Imm[31]}, Imm[31:20]}; //Immediate 
        3'b001:     ImmExt = {20{Imm[31]}, Imm[31:25], Imm[11:7]}; //Store
        3'b010:     ImmExt = {20{Imm[31]}, Imm[7], Imm[30:25], Imm[11:8], {1'b0}}; //Branch, 1'b0 is because branch is "weird"
        3'b011:     ImmExt = {12{Imm[31]}, Imm[31], Imm[19:12], Imm[20], Imm[30:21]}; //Jump
        3'b100:     ImmExt = {12{Imm[31]}, Imm[31:12]}; //Upper Immediate*/
        1'b0: ImmExt = {20{Imm[31]}, Imm[31:20]};
        1'b1: ImmExt = {20{Imm[31]}, Imm[7], Imm[30:25], Imm[11:8], {1'b0}};
        //There will likely be more which I will add when necessary. R is unnecessary(?) so I didn't do it but I should include it
        default:    ImmExt = {32'b0}; //Default is all 0s because if unsure, probably safest. Is this just R type? Likely so.
        //I think default should be I instead as common case should be quickest and that should be the most common but very unsure
    endcase

endmodule
