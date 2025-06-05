#include <iostream>
using namespace std;
int main () {
	
	double myHeight, myWeight, BMI;
	
	cout << "What is your height in meters? ";
	cin >> myHeight;
	cout << "What is your weight in kilograms?";
	cin >> myWeight;
	
	BMI = myWeight / (myHeight * myHeight);
	
	cout << "Your BMI is " << BMI << endl << "Which means you are ";
	
	if (BMI < 18.5) {
		cout << "Underweight";
	} 
	else if (BMI <= 24.9) {
		cout << "Normal/Healthy Weight";
	}
	else if (BMI <= 29.9) {
		cout << "Overweight";
	}
	else {
		cout << "Obese";
	}
	return 0;
}
