module sim();
    logic [7:0]op1;
    logic [7:0]op2;
    logic [1:0]opcode;
    logic [7:0]result;

    alu alu0(
        .op1(op1),
        .op2(op2),
        .opcode(opcode),
        .result(result)
    );

    bench bench0(
        .op1(op1),
        .op2(op2),
        .opcode(opcode),
        .result(result)
    );

    initial begin
        // for (int i = 0; i < 4; i++) begin
        //     $display("-----------------------------------");
        //     opcode = i[1:0]; 
        //     $dumpfile("dump.fst");
        //     $dumpvars(0, sim);
        //     op1 = 8'b0001_0001;
        //     op2 = 8'b0010_0010;
        //     #10;
        //     $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
        //     op1 = 8'b0000_0001;
        //     op2 = 8'b0000_0001;
        //     #10;
        //     $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
        //     op1 = 8'b1000_0001;
        //     op2 = 8'b1000_0001;
        //     #10;
        //     $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
        //     op1 = 8'b0000_0000;
        //     op2 = 8'b0000_0000;
        //     #10;
        //     $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
        // end
        // $finish;
    end
endmodule
