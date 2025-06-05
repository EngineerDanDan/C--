#include <iostream>
using namespace std;
int main () {
	
	char operation;
	double num1, num2, result;
	
	cout << "Enter num1:";
	cin >> num1;	
	cout << "Enter an operation (+, -, *, /):";
	cin >> operation;
	cout << "Enter num2:";
	cin >> num2;
	
	if (operation == '+') {
		result = num1 + num2;
			   	 cout << "The result of your input is: " << result;
	}
	else if (operation == '-') {
		if (num2 > num1) 
		result = num1 - num2;
		if (num1 > num2)
		result = num1 - num2;
  		 		 cout << "The result of your input is: " << result;
	}
	else if (operation == '*') {
		result = num1 * num2;				
			   	 cout << "The result of your input is: " << result;

	}
	else if (operation == '/') {
		if (num1 !=0)
		result = num1 / num2;
		if (num1 ==0) {
		result = 0 / num2;}
		if (num2 ==0) {
			cout << "Invalid";}
			else {
		cout << "The result of your input is: " << result;
		}		   
	}
	
	else {
		cout << "Error.";
	}	
	
	return 0;
}
