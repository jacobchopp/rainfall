///***************************************************
//Week 7 Assignment 1 - Rainfall Calculator
//
//This program prompts for rainfall totals for each month of
//the year and prints the total, average, highest, and lowest.
//
//Author: Jacob Hopp
//Created: 5/8/2016
//Revisions: None
//***************************************************/
//
//#include <iostream>
//#include <string>
//#include <array>
//using namespace std;
//
//const string MONTHS[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
//
//double getTotal(double[]);
//double getAverage(double[]);
//double getLowest(double[], int &); //returns the lowest value, provides the index of the lowest value in the last parameter.
//double getHighest(double[], int &); //returns the highest value, provides the index of the highest value in the last parameter.
//
//int main()
//{
//	double rainfalls[12];
//	int lowestIndex = 0,
//		highestIndex = 0;
//	// Introduce program
//	cout << "Welcome to the rainfall calculator\n\n";
//	// Get rainfall values from user
//	for (int index = 0; index < 12; index++)
//	{
//		do
//		{
//			cout << "What was the rainfall for " << MONTHS[index] << "? ";
//			cin >> rainfalls[index];
//			if (rainfalls[index] < 0) { cout << "Please only enter positive rainfall amounts.\n"; }
//		} while (rainfalls[index] < 0);
//	}
//	// Display stats
//	cout << "The total rainfall is " << getTotal(rainfalls) << endl;
//	cout << "The average rainfall per month is " << getAverage(rainfalls) << endl;
//	cout << "The lowest rainfall was " << getLowest(rainfalls, lowestIndex);
//	cout << " in " << MONTHS[lowestIndex] << endl;
//	cout << "The highest rainfall was " << getHighest(rainfalls, highestIndex);
//	cout << " in " << MONTHS[highestIndex] << endl;
//	return 0;
//}
//
//double getTotal(double rainfalls[])
//{
//	double total = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		total += rainfalls[i];
//	}
//	return total;
//}
//
//double getAverage(double rainfalls[])
//{
//	double total = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		total += rainfalls[i];
//	}
//	return total/12;
//}
//
//double getLowest(double rainfalls[], int &index)
//{
//	double lowest = rainfalls[0];
//	for (int i = 1; i < 12; i++)
//	{
//		if (rainfalls[i] < lowest)
//		{
//			lowest = rainfalls[i];
//			index = i;
//		}
//	}
//	return lowest;
//}
//
//double getHighest(double rainfalls[], int &index)
//{
//	double highest = rainfalls[0];
//	for (int i = 1; i < 12; i++)
//	{
//		if (rainfalls[i] > highest)
//		{
//			highest = rainfalls[i];
//			index = i;
//		}
//	}
//	return highest;
//}
