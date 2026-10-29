module half_adder(
    input [7:0]op1,
    input [7:0]op2,
    output [7:0]sum,
    output [7:0]carry
);
    xor(sum, op1, op2);
    and(carry, op1, op2);
endmodule
