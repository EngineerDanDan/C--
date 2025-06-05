#include <iostream>
using namespace std;
int main () {
	
	char operation;
	double myNum1, myNum2, myResult;
	
	cout << "Enter myNum1: ";
	cin >> myNum1;
	cout << "Choose an operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter myNum2: ";
	cin >> myNum2;
	
	if (operation == '+') {
	   myResult = myNum1 + myNum2;
	   cout << "Result is: " << myResult;
       }
 	   else if (operation == '-') {
	   myResult = myNum1 - myNum2;
	   cout << "Result is: " << myResult;
		}
		else if (operation == '*') {
			myResult = myNum1 * myNum2;
			cout << "Result is: " << myResult;
		}
		else if ( operation == '/') {
		if (myNum2 != 0) {
		myResult = myNum1 / myNum2;
			cout << "Result is: " << myResult;
		   }else {
		   	cout << "MATH ERROR. TRY AGAIN.";
		   }
			}
	else {
		cout << "Invalid operation, try again.";
	}
	
	
	return 0;
}
