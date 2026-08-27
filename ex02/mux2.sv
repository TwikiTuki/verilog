module mux2(
    input logic [7:0]in1,
    input logic [7:0]in2,
    input logic  sel,
    output logic [7:0]out
);
    logic nsel;
    logic [7:0] nw1;
    logic [7:0] nw2;

    not(nsel, sel);
    and(nw1, in1, {8{sel}});
    and(nw2, in2, {8{nsel}});

    or(out, nw1, nw2);
    
endmodule
