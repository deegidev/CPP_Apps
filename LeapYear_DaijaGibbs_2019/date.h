#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
//#include "date.h"
using namespace std;
//*********************************************************************************************
//*********************************************************************************************
// D A T E . h
//This declaration should go in date.h
#ifndef DATE_H
#define DATE_H
class Date
{
public:
	Date(); //default constructor; sets m=01, d=01, y =0001
	Date(unsigned m, unsigned d, unsigned y); //explicit-value constructor to set date equal to today's
											  //date. Use 2-digits for month (m) and day (d), and 4-digits for year (y); this function should //print a message if a leap year.
	void display();//output Date object to the screen
	int getMonth();//accessor to output the month
	int getDay();//accessor to output the day
	int getYear();//accessor to output the year
	void setMonth(unsigned m);//mutator to change the month
	void setDay(unsigned d);//mutator to change the day
	void setYear(unsigned y);//mutation to change the year
	friend ostream & operator<<(ostream & out, const Date & dateObj);//overloaded operator<< as a friend function with chaining
																	 //you make add other functions if necessary

	//My Functions
	bool CheckMonth(unsigned m, unsigned d, unsigned y); //checks for valid month
	bool CheckDay(unsigned int m, unsigned int d, unsigned int y); //checks for valid days based on year and month
	bool CheckYear(unsigned int m, unsigned int d, unsigned int y); //checks for valid year
	bool LeapYear(unsigned int y); //checks for leapyear

private:
	int myMonth, myDay, myYear; //month, day, and year of a Date obj respectively
};
#endif


