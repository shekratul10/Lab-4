module aluctrl #(
    parameter ADDRESS_WIDTH = 5,
              ALU_INST_WIDTH = 1,
              DATA_WIDTH = 32

)(
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic [DATA_WIDTH-1:0] ALUop2,
    output logic [ALU_INST_WIDTH-1:0] ALUctrl,
    output logic [DATA_WIDTH-1:0] ALUout,
    output eq
)
//yolo
always_comb begin
    case (ALUctrl)
         1 b'0:
            ALUout = ALUop1 + ALUop2;
         1 b'1: 
            if (ALUop1 != ALUop2) eq = 0;
            else ep = 1;
        default:  ALUctrl = 0;
                  eq = 0;
    endcase
end

endmodule

