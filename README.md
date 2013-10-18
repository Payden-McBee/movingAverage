movingAverage
=============

Takes the average of a stream of inputs, finds the max and min values and range
The main.c is my specific implementation of taking an average of a stream of incoming points. 
The .h file declares all of my functions, arrays, and variables used. The other .c file implements my functions.

The moving average has a given number of inputs that it averages. For example, if the number of averages is 2,
the the first two numbers will be averaged, then the second number will be averaged with the next incoming number,
and so on as long as a new input is passed to the program.
