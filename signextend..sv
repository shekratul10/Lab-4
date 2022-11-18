module mux2 #(
    parameter   WIDTH = 32,
)(
    input logic [WIDTH-1:7]     Imm,
    input logic [2:0]           Immsrc,
    output logic [WIDTH-1:0]    ImmExt
);

always_comb
    case (Immsrc)
        3'b000: ImmExt = {20{Imm[31]}, Imm[31:20]};
        3'b001:
        3'b010:
        3'b011:
        3'b100:
        default:
    endcase


endmodule
