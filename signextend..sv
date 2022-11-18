module signextend #(
    parameter   WIDTH = 32,
)(
    input logic [WIDTH-1:7]     Imm,
    input logic [2:0]           Immsrc,
    output logic [WIDTH-1:0]    ImmExt
);

always_comb
    case (Immsrc)
        3'b000:     ImmExt = {20{Imm[31]}, Imm[31:20]}; //Immediate
        3'b001:     ImmExt = {20{Imm[31]}, Imm[31:25], Imm[11:7]} //Store
        3'b010:     ImmExt = {20{Imm[12]}, Imm[31], Imm[7], Imm[30:25], Imm[11:8]}; //Branch
        3'b011:     ImmExt = {12{Imm[31]}, Imm[31], Imm[19:12], Imm[20], Imm[30:21]}; //Jump
        3'b100:     ImmExt = {12{Imm[31]}, Imm[31:12]}; //Upper Immediate
        default:    ImmExt = {20{Imm[31]}, Imm[31:20]}; //Default is Immediate as we are mainly using it, common case: quickest
    endcase

endmodule
