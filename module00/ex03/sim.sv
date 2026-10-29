module sim();
    logic [7:0]op1;
    logic [7:0]op2;
    logic [7:0]sum;
    logic [7:0]carry;

    half_adder adder(
        .op1(op1),
        .op2(op2),
        .sum(sum),
        .carry(carry)
    );

    initial begin
        $dumpfile("dump.fst");
        $dumpvars(0, sim);
        op1 = 8'b0000_0000;
        op2 = 8'b0000_0000;
        #10;
        $display("op1 = %b | op2 = %b | sum = %b | carry = %b", op1, op2, sum, carry);
        op1 = 8'b1111_1111;
        op2 = 8'b1111_1111;
        #10;
        $display("op1 = %b | op2 = %b | sum = %b | carry = %b", op1, op2, sum, carry);
        op1 = 8'b0101_0101;
        op2 = 8'b0101_0101;
        #10;
        $display("op1 = %b | op2 = %b | sum = %b | carry = %b", op1, op2, sum, carry);
        op1 = 8'b0101_0101;
        op2 = 8'b1010_1010;
        #10;
        $display("op1 = %b | op2 = %b | sum = %b | carry = %b", op1, op2, sum, carry);

    end
endmodule
