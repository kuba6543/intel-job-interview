# GitHub Repository for job interview

## Task 1

Code had to be a little bit adjusted to work properly using MATLAB. Most likely Octave is using different comment marks and has different "end" keyword for ending loops.

MATLAB plot presenting a, b and c funcions is presented below:

![Plot of a, b and c functions in MATLAB](/img/task_1.png)

Parameters described in code:
* a - function described in interview file;
* b - first derivative of a;
* c - second derivative of a (also the first derivative of b).

## Task 2

All of the a, b and c combinations do not exceed accuracy limit defined in document (2.15e-6), but some of them only by a small margin. The coeffs can be cut to reduce its size and gate-count:

* a - can be cut by 2 bytes (3 integer, 27 fractional)
* b - can be cut by 13 bytes (3 integer, 16 fractional)
* c - can be cut by 19 bytes (2 integer, 11 fractional)

The results of optimizing parameters can be presented below:

![Task 2 - optimizing a, b and c parameters width](/img/task_2.png)

## Task 3

All of RTL components have been completed. Look-up table has been made using [Python automation script](/rtl_model/convert_table_to_lut.py). The results of Vivado simulation can be presented below:

![Task 3 - Vivado simulation](/img/task_3.png)

## Task 4

The Verilator simulation has been performed after some tweaks. The results are presented below:

![Task 4 - Verilator results](/img/task_4a.png)

After performing Verilator simulation, the GTKWave dump file has been opened:

![Task 4 - GTKWave results](/img/task_4b.png)

Some adjustment has been made to the SystemVerilog RTL and the error has been reduced to 2.33e-6:

![Task 4 - Error adjust](/img/task_4c.png)

After even more adjustments to code in last commit, the error has been presumably eliminated:

![Task 4 - Error eliminated](/img/task_4d.png)