#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int days;
	int year;
	int month;
	int remainingday;
	int week;
	cout << "Enter a day number: ";
	cin >> days;
	year = floor(days/365);
	remainingday = days - (year * 365);
	month = floor(remainingday/30);
	remainingday = remainingday - (month * 30);
	cout << "The year is: " << year << endl;
	cout << "The month is " << month << endl;
	cout << "THe day is " << remainingday << endl;
	week = floor(days/7);
	remainingday = days - (7*week);
	cout << "The total week is of " << week;
	cout << " with " << remainingday << " days.";


}
