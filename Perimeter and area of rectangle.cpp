#include <iostream>
using namespace std;
int main () {
	float perimeter, area, length, width;
	
	cout << "Enter your rectangle's length: ";
	cin >> length;
	cout << "Enter your rectangle's width: ";
	cin >> width;
	
	perimeter = (2 * length) * (2 * width);
	area = length * width;
	
	cout << "The perimeter of your rectangle is: " << perimeter << endl;
	cout << "The area of your rectangle is: " << area;
	
	return 0;
}
