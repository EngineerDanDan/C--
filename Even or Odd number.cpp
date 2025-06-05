#include <iostream>
using namespace std;
int main () {
	
	int myNum1;
	
	cout << "Enter an integer: ";
	cin >> myNum1;
	
	if (myNum1 % 2 == 0) {
		cout << myNum1 << " is an even number";
	}
	else {
		cout << myNum1 << " is an odd number";
	}
	
	return 0;
}
