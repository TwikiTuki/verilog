module alu(
    input [7:0]op1,
    input [7:0]op2,
    input [1:0]opcode,
    output [7:0]result
);
    assign result = (opcode == 2'b00) ? op1 & op2:
            (opcode == 2'b01) ? op1 | op2:
            (opcode == 2'b10) ? op1 + op2:
            8'b0;
 
endmodule
