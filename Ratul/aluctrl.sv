module aluctrl #(
    parameter //ADDRESS_WIDTH = 5,
              //ALU_INST_WIDTH = 1,
              DATA_WIDTH = 32

)(
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic [DATA_WIDTH-1:0] ALUop2,
    input logic [2:0] ALUctrl,
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic eq
);

always_comb begin
    eq = (ALUop1 == ALUop2);
        case (ALUctrl)
            3'b000:    ALUout = ALUop1 + ALUop2;
            3'b001:    ALUout = ALUop1 - ALUop2;
            3'b010:    ALUout = ALUop1 & ALUop2;
            3'b011:    ALUout = ALUop1 | ALUop2;
            3'b100:    ALUout = {{31{1'b0}},{ALUop1 < ALUop2}};
            default:   ALUout = 32'b0;
        endcase
    end

endmodule

