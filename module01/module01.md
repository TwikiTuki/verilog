# Exercise 00 - Self-Checking Simulation

**Turn-in directory:** `ex05/`
Files to turn in : Makefile, sim.sv, alu.sv, testbench.sv
Allowed constructs : module, logic, wire, integer, inital, \# (delay), assign, if, case
Allowed system functions: $dumpfile, $dumpvars, $display, $write, $finish

## Hardware Design (alu.sv)
Hardware Inputs:  [7:0]op1, [7:0]op2, [1:0]opcode
Harware Outputs: [7:0]result

Modify and extend the ALU from previous exercises with one additional operation.
The ALU shall remain implemented using **dataflow modeling**.
Add one additional operation SUB:

| opcode | result        |
| ------ | ------------- |
| 00     | AND (op1,op2) |
| 01     | OR (op1,op2)  |
| 10     | ADD (op1,op2) |
| 11     | SUB (op1,op2) |
The selected operation shall continue to be controlled through the operation select signal.
## Cheking Testbench (testbench.sv)

Unlike the previous exercises, this simulation introduces a separate module to generate the inputs and check the outputs of the hardware design.
The complete running simulation needs to be structured as:
- ALU module
- testbench module
- simulation module instantiating and connecting both ALU and testbench

The testbench is responsible for:
- Generating all input values and tests (stimulus)
- Receive and observe the ALU results
- Computing the expected result based on the ALU inputs
- Comparing the expected value with the DUT output.
- The outputs of this module are the inputs for the ALU
### Behavioral Modeling
The testbench introduces **behavioral modeling** , with the `if`, `case` constructs but only on the testbench for the moment, not in the hardware design yet. 

Each test shall be written explicitly.
Every test vector must:
- assign the ALU inputs
- wait for the outputs to settle
- compute the expected result
- compare the expected result with the ALU output using `if`, `case` statements
- display whether the test passed or failed

Do not automate(loop) the execution of the tests. Each test case must appear explicitly in the source code.

Every mismatch shall increment an error counter.

At the end of the simulation, display:
- the total number of executed tests
- the total number of detected errors
- a final PASS or FAIL result.

The simulation shall also generate a waveform file named `dump.fst`.
The waveform remains a debugging tool, but the correctness of the design shall be determined automatically by the testbench.
## Simulation (sim.sv)

Unlike the previous exercises, the simulation must contain be organized into separate modules.
Your simulation shall contain:
- Instantiate the alu module as dut in the simulation module. (a.k.a. Design Under Test)
- Instantiate the testbench module as tb
- Connect the inputs and outputs from dut and tb