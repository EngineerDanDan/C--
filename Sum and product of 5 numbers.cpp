#include <iostream>
using namespace std;
int main () {
	float num1, num2, num3, num4, num5, sum, product;
	
	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	cout << "Enter num3: ";
	cin >> num3;
	cout << "Enter num4: ";
	cin >> num4;
	cout << "Enter num5: ";
	cin >> num5;
	
	sum = num1 + num2 + num3 + num4 + num5;
	product = num1 * num2 * num3 * num4 * num5;
	
	cout << "The sum of num1 to num5 is: " << sum << endl;
	cout << "The product of num1 to num5 is: " << product;
	
	return 0;
}
