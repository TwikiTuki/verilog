module bench(
    output logic[7:0]op1,
    output logic[7:0]op2,
    output logic[1:0]opcode,
    input logic[7:0]result
);
    int test_passed = 0;
    int test_failed = 0;

    task automatic alu_operation_check(
        input logic[7:0]operand1,
        input logic[7:0]operand2,
        input logic[1:0]operation,
        // input logic[7:0]expected 
    );
        logic [7:0]expected;
        if (operation == 2'd0) begin
            expected = operand1 & operand2;
        end else if (operation == 2'd1) begin
            expected = operand1 | operand2;
        end else if (operation == 2'd2) begin
            expected = operand1 + operand2;
        end else begin
            $display("Skiped %d, %d, %d\n", operand1, operand2, operation);
            return;
        end
        begin
            op1 = operand1;
            op2 = operand2;
            opcode = operation;
            #10
            if (result === expected) begin
                $display("Passed %d, %d, %d\n", operand1, operand2, operation);
                test_passed++;
            end else begin
                $display("Failed %d, %d, %d\n", operand1, operand2, operation);
                test_failed++;
            end
        end
    endtask

    initial begin
        $display("Sttarting tests: ");
        #10
        for (int i = 0; i < 4; i++) begin
            $display("-----------------------------------");
            opcode = i[1:0]; 
            $dumpfile("dump.fst");
            $dumpvars(0, sim);
            alu_operation_check( 8'b0001_0001, 8'b0010_0010, opcode);
            // #10;
            // $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
            alu_operation_check( 8'b0000_0001, 8'b0000_0001, opcode);
            // #10;
            // $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
            alu_operation_check( 8'b1000_0001, 8'b1000_0001, opcode);
            // #10;
            // $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
            alu_operation_check( 8'b0000_0000, 8'b0000_0000, opcode);
            // #10;
            // $display("op1 = %b | op2 = %b | opcode = %b | result = %b", op1, op2, opcode, result);
            $display("| Resume ::: Passed:%d, Failed:%d|\n", test_passed, test_failed);
        end
        // alu_operation_check(8'd1, 8'd1, 2'd0);
        // alu_operation_check(8'd1, 8'd1, 2'd0);
        $finish;

    end
endmodule

