#include <iostream>
using namespace std;
int main () {
	
	int myNum1;
	
	cout << "Enter an integer: ";
	cin >> myNum1;
	
	if (myNum1 % 3 == 0 && myNum1 % 5 == 0) {
		cout << myNum1 << " is exactly divisible by 3 and 5";
	}
	else {
		cout << myNum1 << " is not exactly divisible by 3 and 5";
	}	
	return 0;
}
