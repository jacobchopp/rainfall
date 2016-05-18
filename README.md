# rainfall
Rainfall calculator assignment I did for Programming I class

Assignment Description:

Assignment 1: Write a program that lets the user enter the total rainfall for each of 12 months into an array of doubles. The program should use two 12-element arrays. One array will hold strings, the names of the 12 months. This array will be initialized when the array is created using an initialization list (could also be created as a array of constants). The second array will hold doubles which will be the total rainfail for each month. The program will prompt the user for the rainfall for each month (using both arrays) and store the value entered into the array with the rainfall totals; the other is used to display which month the program is asking for the rainfall total. The program should display the following once the data is all entered:

The total rainfall for the year
The average monthly rainfall
The month with the highest amount of rainfall (must display the month as a string)
The month with the lowest amount of rainfall (must display the month as a string)
The program must have the following functions:

double getTotal(double [ ], int);
double getAverage(double [ ], int);
double getLowest(double [ ], int, int&); //returns the lowest value, provides the index of the lowest value in the last parameter.
double getHighest(double [ ], int, int&); //returns the highest value, provides the index of the highest value in the last parameter.
