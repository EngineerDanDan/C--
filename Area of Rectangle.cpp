#include <iostream>
using namespace std;
int main () {
	float volume, length, width, height;
	
	cout << "Enter the length of your rectangle: ";
	cin >> length;
	cout << "Enter the width of your rectangle: ";
	cin >> width;	
	cout << "Enter the height of your rectangle: ";
	cin >> height;
	
	volume = length * width * height;
	
	cout << "The area of the rectangle is:" << volume;
	
	return 0;
}
