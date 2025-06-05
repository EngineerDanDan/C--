#include <iostream>
using namespace std;
int main () {
	float seconds, minutes, hours;
	
	cout << "Enter seconds: ";
	cin >> seconds;
	
	minutes = seconds / 60;
	hours = seconds / 3600;
	
	cout << seconds << " seconds in minute/s is:" << minutes << " minute/s" << endl;
	cout << seconds << " seconds in hour/s is: " << hours << " hour/s";
	
	return 0;
}
