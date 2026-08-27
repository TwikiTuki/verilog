module sim();
    logic [7:0]in1;
    logic [7:0]in2;
    logic sel;
    logic [7:0]out;

    always #10 in1 <= ~in1;
    always #20 in2 <= ~in2;

    mux2 mux(
        .in1(in1),
        .in2(in2),
        .sel(sel),
        .out(out)
    );

    initial begin
        $dumpfile("dump.fst");
        $dumpvars(0, sim);
        in1 = 0;
        in2 = 1;
        sel = 1;
        out = 0;
        #5;
        sel = 1;
        #5;
        sel = 0;
        #5;
        sel = 1;
        #5;
        sel = 0;
        #5
        sel = 0;
        $finish;
        $display("in1=%d in2=%d sel=%d out=%d", in1, in2, sel, out);

    end
endmodule
