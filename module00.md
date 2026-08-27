# Exercise 00 - Makefile & Simulation
Turn-in directory : ex00/
Files to turn in : Makefile, sim.sv
Allowed constructs : module, logic, integer, initial, begin, end
Allowed system functions: $dumpfile, $dumpvars, $display, $write, $finish

Write a Makefile that compiles and runs a SystemVerilog simulation using Verilator.

The `all` rule must:
- Compile the simulation.
- Execute the generated simulation.

When generating a waveform file named `dump.fst`, the generated file must be viewable using GTKWave or Surfer.

The simulation must create variables and display a formatted message with the variable values using `$display()` or `$write()`.

This exercise introduces the complete RTL development flow:
- write a SystemVerilog module;
- compile the design;
- execute the simulation;
- inspect the generated waveform.
# Exercise 01 - Basic Logic Gates
Turn-in directory: `ex01/`
Files to turn in : Makefile, sim.sv
Allowed constructs : module, logic, wire, initial, gate primitives (`and`, `or`, `not`), \# (delay)
Allowed system functions: $dumpfile, $dumpvars, $display, $write, $finish
## Structural Modeling
The hardware design of this exercise is described using **structural modeling**. (a.k.a. defining the hardware modules and how they are connected)
Implement the following logic gates:
- AND
- OR
- NOT
First implement scalar versions (bit sized).
Then extend them to operate on 8-bit vectors.
Write a simulation validating every logic combination.
Waveform generation is mandatory.
## Vector literals
This exercise introduces the SystemVerilog numeric literal syntax.
The following values all represent exactly the same 8-bit number:
- `8'hAA`
- `8'b1010_1010`
- `8'd170`
Your simulation must use all three representations and verify that they generate identical waveforms.
## Waveform stimulus
Apply the following values every 10 ns.

| Time  | Stimulus                 |
| ----- | ------------------------ |
| 0 ns  | A = `8'h00`, B = `8'h00` |
| 10 ns | A = `8'hF0`, B = `8'hAA` |
| 20 ns | A = `8'hF0`, B = `8'h0F` |
| 30 ns | A = `8'hAA`              |
| 40 ns | A = `8'b1010_1010`       |
| 50 ns | A = `8'd170`             |
| 60 ns | A = `8'hFF`, B = `8'h55` |
Observe that the literals `8'hAA`, `8'b1010_1010`, and `8'd170` generate a continuous waveform.

By the end of this exercise you should be able to recognize the correct behavior of an AND, OR and NOT gates on vectors by simply observing the generated waveforms.
### Example Gate Generated Values

| Logic | 10ns                   | 20ns                   | 30ns                   |
| ----- | ---------------------- | ---------------------- | ---------------------- |
| A     | `8'hF0 (8'b1111_0000)` | `8'hF0 (8'b1111_0000)` | `8'hAA (8'b1010_1010)` |
| B     | `8'hAA (8'b1010_1010)` | `8'h0F (8'b0000_1111)` |                        |
| AND   | `8'hA0 (8'b1010_0000)` |                        |                        |
| OR    |                        | `8'hA0 (8'b1111_1111)` |                        |
| NOT   |                        |                        | `8'h55 (8'b0101_0101)` |
# Exercise 02 - 2-to-1 Multiplexer
Turn-in directory:`ex02/`
Files to turn in : Makefile, sim.sv, mux2.sv
Allowed constructs : module, logic, wire, initial, gate primitives (`and`, `or`, `not`), always, \# (delay)
Allowed system functions: $dumpfile, $dumpvars, $display, $write, $finish
## Hardware Design (mux2.sv)
Hardware Inputs:  [7:0]in1, [7:0]in2, sel
Harware Outputs: [7:0]out

This module, again must be implemented using **structural modeling**.
Build the 2-to-1 multiplexer by interconnecting logic gates.
The multiplexer must:
- support 8-bit vector inputs.
- select the output through a 1-bit control signal.

| sel | out |
| --- | --- |
| 0   | in1 |
| 1   | in2 |
## Simulation (sim.sv)
- Instantiate the mux2 module.
- Generate square waveforms at the inputs with different frequencies to help the evaluation.
```verilog
	always #10 in1 = ~in1;
	always #20 in2 = ~in2;
```
- Inspect the output waveform and verify that the selected input waveform always appears at the output.

# Exercise 03 - Half-Adder
Turn-in directory: `ex03/`
Files to turn in : Makefile, sim.sv, half_adder.sv
Allowed constructs : module, logic, wire, initial, gate primitives (`xor`, `and`), \# (delay)
Allowed system functions: $dumpfile, $dumpvars, $display, $write, $finish

## Hardware Design (half_adder.sv)
Hardware Inputs:  [7:0]op1, [7:0]op2
Harware Outputs: [7:0]sum, [7:0]carry

This module again, must be implemented using **structural modeling**.

Implement an Byte Half-Adder.

The Half-Adder shall be built by interconnecting logic gates into a combinational network.

The design must generate the outputs (bit-by-bit), according to the truth table:
- sum
- carry

| op1 | op2 | sum | carry |
| --- | --- | --- | ----- |
| 0   | 0   | 0   | 0     |
| 0   | 1   | 1   | 0     |
| 1   | 0   | 1   | 0     |
| 1   | 1   | 0   | 1     |

## Simulation (sim.sv)
- Instantiate the half_adder module.

Display intermediate values during simulation.
Observe how every logic gate evaluates simultaneously when an input changes.

By the end of this exercise you should understand that a digital circuit is a network of hardware operating concurrently rather than a sequence of software instructions.

# Exercise 04 - Full-Adder
**Turn-in directory:** `ex04/`
Files to turn in : Makefile, sim.sv, full_adder.sv
Allowed constructs : module, logic, wire, initial, gate primitives (`xor`, `and`), \# (delay)
Allowed system tasks/functions: $dumpfile, $dumpvars, $display, $write, $finish

## Hardware Design (full_adder.sv)
Hardware Inputs:  [7:0]op1, [7:0]op2, [7:0]carry   
Harware Outputs: [7:0]sum, [7:0]carry   


## Simulation (sim.sv)
- Instantiate the full_adder module.


# Exercise 05 - Mini ALU
**Turn-in directory:** `ex05/`
Files to turn in : Makefile, sim.sv, alu.sv
Allowed constructs : module, logic, wire, initial, assign, operators (+,&,|,?), \# (delay)
Allowed system tasks/functions: $dumpfile, $dumpvars, $display, $write, $finish

## Dataflow Modeling

This exercise introduces **dataflow modeling** using additional continuous constructs.
- continuous assignments
- arithmetic and logical operators (+,&,|)
- conditional operator (`?:`)
```systemverilog
assign sum = carry ? (op1 + op2 + 1) : (op1 + op2B);
```

## Hardware Design (alu.sv)
Hardware Inputs:  [7:0]op1, [7:0]op2, [1:0]opcode
Harware Outputs: [7:0]result

Implement a combinational ALU (Arithmetic Logic Unit) using dataflow modeling and supporting the following byte operations:
- AND
- OR
- ADD (full-adder)

The selected operation shall be controlled through an operation select signal `opcode`.
The ALU must support byte operands.

| opcode | result        |
| ------ | ------------- |
| 00     | AND (op1,op2) |
| 01     | OR (op1,op2)  |
| 10     | ADD (op1,op2) |
## Simulation (sim.sv)
Write a complete simulation exercising every operation.

Inspect the generated waveform and verify that the ALU behaves as expected.

This exercise introduces the style commonly used to describe combinational RTL in modern digital designs.


