module sim();

    logic [7:0] value;
    integer count;

    initial begin
        value = 42;
        count = 7;

        $display("Simulation started: value = %0d, count = %0d", value, count);

		$dumpfile("dump.fst");
		$dumpvars(0, sim);

	#10
        value = 100;
        count = 12;

        $display("Simulation finished: value = %0d, count = %0d", value, count);
	#10

        $finish;
    end

endmodule

