#include <iostream>
using namespace std;
int main () {
	float days, weeks, months, years1, years2, decade1, decade2, century1, century2;
	
	cout << "Input the number of day/s: ";
	cin >> days;
	
	months = days / 30;
	weeks = days / 7;
	years1 = days / 365;
	years2 = days / 366;
	decade1 = days / 3650;
	decade2 = days/ 3652;
	century1 = days / 36584;
	century2 = days / 36650;
	
	cout << days << " days" << " in week/s is:" << weeks << " week/s" << endl;
	cout << days << " days" << " in month/s is:" << months << " month's" << endl;
	cout << days << " days" << " in year/s if it is not a leap year is: " << years1 << "years" << endl;
	cout << days << " days" << " in year/s if it is leap year is: " << years2 << " year/s" << endl;
	cout << days << " days" << " in decade excluding leap years is:" << decade1 << " decade/s" << endl;
	cout << days << " days" << " in decade including leap years is:" << decade2 << " decade/s" << endl;
	cout << days << " days" << " in century excluding leap years is:" << century1 << "centuries" << endl;
	cout << days << " days" << " in century including leap years is: " << century2 << "centuries" << endl;
	 
	return 0;
}
