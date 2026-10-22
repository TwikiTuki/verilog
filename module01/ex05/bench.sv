module bench(
    output [7:0]op1,
    output [7:0]op2,
    output [1:0]opcode,
    input [7:0]result
);
    assign op1 = 8'b0000_0101;
    assign op2 = 8'b0000_0011;
    assign opcode = 2'b01;
    initial begin
        #10
        $display("bench op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
        // if(1'b1)
        //     $display("It is true");
        // else
        //     $display("It is not true");
    end
endmodule

