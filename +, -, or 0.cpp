#include <iostream>
using namespace std;
int main () {
	
	float myNum1;
	
	cout << "Enter a number: ";
	cin >> myNum1;
	
	if (myNum1 > 0) {
		cout << "myNum1 is positive";
	}
	else if (myNum1 < 0) {
		cout << "myNum1 is negative";
	}
	else if (myNum1 == 0) {
		cout << "myNum1 is zero (0)";
	}
	
	return 0;
}
