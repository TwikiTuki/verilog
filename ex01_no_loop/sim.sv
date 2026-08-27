module sim();
    logic [7:0]A; 
    logic [7:0]B; 
    logic [7:0]andRes;
    logic [7:0]orRes;
    logic [7:0]notRes;

    AND and0(.A(A), .B(B), .C(andRes));
    OR  or0(.A(A), .B(B), .C(orRes));
    NOT not0(.A(A), .C(notRes));
   
    initial begin
        $dumpfile("dump.fst");
        $dumpvars(0, sim);
        A = 8'b00001010;
        B = 8'b00000000;
        $display("Simulation started: A = %0d, B = %0d", A, B);
        #10

        //00ns
        A = 8'h00;
        B = 8'h00;
        #10

        //10ns
        A = 8'hF0;
        B = 8'hAA;
        #10

        //30ns
        A = 8'hAA;
        #10

        //40ns
        A = 8'b1010_1010;

        #10
        //50ns
        A = 8'd170;
        #10

        //60ns
        A = 8'hFF;
        B = 8'h55;
        #10
        $display("Simulation finished: A = %0d, B = %0d", A, B);
        $display("Simulation finished: and = %0d, or = %0d, not = %0d", andRes, orRes, notRes);
    end
endmodule
