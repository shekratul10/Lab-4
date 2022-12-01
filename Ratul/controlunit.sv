module controlunit #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0] instr, //funct3 +opcode
    input logic  EQ,
    output logic [2:0] ALUctrl, //can be 1 bit, selct either add or branching check instruction
    output logic RegWrite, //enable write result into register (i.e add)
    output logic ALUsrc, //select between reg or imm
    output logic [1:0] ImmSrc, // 1 bit select 
    output logic PCsrc //select incpc or branch_pc
);

always_comb 
    begin
        RegWrite = 1'b0; 
        ALUctrl  = 3'b111; 
        ALUsrc   = 1'b1; 
        ImmSrc   = 2'b11; 
        PCsrc    = 1'b0;

        case(instr[6:0])
            7'd19:case(instr[14:12])
                3'b000: begin
                    RegWrite = 1'b1;
                    ALUctrl  = 3'b000;
                    ImmSrc   = 2'b00;
                end
            default: ;
            endcase
            7'd99:case (instr[14:12])
                3'b001: if (!EQ) begin 
                    PCsrc   = 1'b1; 
                end else begin 
                    ALUsrc  = 1'b0; 
                    ImmSrc  = 2'b11;
                end
            default: ;
            endcase
        default: ;
        endcase
    end

endmodule

//need logic for outputs except from ALUctrl
