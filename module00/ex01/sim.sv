module sim();
    logic [7:0] A;
    logic [7:0] B;
    logic [7:0] andRes;
    logic [7:0] orRes;
    logic [7:0] notRes;

    AND and0(.A(A), .B(B), .C(andRes));
    OR  or0 (.A(A), .B(B), .C(orRes));
    NOT not0(.A(A), .C(notRes));

    // Test vectors
    logic [7:0] A_tests [0:6] = '{
        8'h00,
        8'hF0,
        8'hF0,
        8'hAA,
        8'b1010_1010,
        8'd170,
        8'hFF
    };

    logic [7:0] B_tests [0:6] = '{
        8'h00,
        8'hAA,
        8'h0F,
        8'h0F,
        8'h0F,
        8'h0F,
        8'h55
    };

    initial begin
        $dumpfile("dump.fst");
        $dumpvars(0, sim);

        for (int i = 0; i < 7; i++) begin
            A = A_tests[i];
            B = B_tests[i];

            #10;

            $display(
                "A = %02h, B = %02h, AND = %02h, OR = %02h, NOT = %02h",
                A, B, andRes, orRes, notRes
            );
        end

        $display("Simulation finished.");
        $finish;
    end
endmodule
