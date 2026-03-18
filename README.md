# GitHub Repository for job interview

## Task 1

Code had to be a little bit adjusted to work properly using MATLAB. Most likely Octave is using different comment marks and has different "end" keyword for ending loops.

MATLAB plot presenting a, b and c funcions is presented below:

![Plot of a, b and c functions in MATLAB](/img/task_1/plot.png)

Parameters described in code:
* a - function described in interview file;
* b - first derivative of a;
* c - second derivative of a (also the first derivative of b).

## Task 2

All of the a, b and c combinations presumably do not exceed accuracy limit defined in document (2.15e-6). By my understanding, it is easier to implement coefficients with less complex fractions.
By the looks of it, the CoeffTable.hpp has this line:     {   8,   -0.5101835727691650390625000000,    1.7201766967773437500000000000,    1.0068359375000000000000000000 }, which presumably has the highest amount of zeroes.


