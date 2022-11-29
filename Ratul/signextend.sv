module signextend (
    input logic [31:7] instr,
    input logic  [1:0] ImmSrc,
    output logic [31:0] ImmOp
);

always_comb begin
    case (ImmSrc)
        // Immediate
            2'b00:  ImmOp = {{20{instr[31]}},{instr[31:20]}};
        // Upper Immediate
            2'b01:  ImmOp = {{instr[31:12]},{12{1'b0}}}; 
        // Store
            2'b10:  ImmOp = {{20{instr[31]}},{instr[31:25]},{instr[11:7]}};
        // Branch
            2'b11:  ImmOp = {{21{instr[31]}},{instr[7]},{instr[30:25]},{instr[11:8]}};
        // Jump      
            //3'b100:  ImmOp = {{13{instr[31]}},{instr[19:12]},{instr[20]},{instr[30:21]}};
        // Default
            default: ImmOp = {32{1'b0}};
        endcase
end

endmodule
