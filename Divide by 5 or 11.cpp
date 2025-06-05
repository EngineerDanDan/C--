#include <iostream>
using namespace std;
int main () {
	
	int myNum1;
	
	cout << "Enter a whole number: ";
	cin >> myNum1;
	
	if (myNum1 % 5 == 0) {
		cout << myNum1 << " is exactly divisible by 5!";
	}
	else if (myNum1 % 11 == 0) {
		cout << myNum1 << " is exactly divisible by 11!";
	}
	 	else {
	 		cout << "myNum1 is not divisible by 5 or 11";
		 }

	return 0;
}
