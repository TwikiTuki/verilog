module full_adder(
    input [7:0]op1,
    input [7:0]op2,
    input [7:0]carry_inp,
    output [7:0]sum,
    output [7:0]carry_out
);
    logic [7:0]and1;
    logic [7:0]and2;
    logic [7:0]and3;
    
    xor(sum, op1, op2, carry_inp);
    and(and1, op1, op2);
    and(and2, op1, carry_inp);
    and(and3, carry_inp, op2);
    or(carry_out, and1, and2, and3);
endmodule
