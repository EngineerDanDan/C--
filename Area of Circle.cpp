#include <iostream>
using namespace std;
int main () {
	float circumference, area, radius, pi;
	
	cout << "Enter your radius: ";
	cin >> radius;
	
	pi = 3.1416;
	circumference = 2 * pi * radius;
	area = pi * radius * radius;
	
	cout << "The circumference of your circle is: " << circumference << endl;
	cout << "The area of your circle is: " << area;
	
	return 0;
}
