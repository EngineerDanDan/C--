#include <iostream>
using namespace std;
int main () {
	
	string myName, myProgram;
	int myYear;
	char mySection;
	float myPrelim, myMterm, myFgrade, myAverage;
	
	cout << "Enter your first  name: ";
	cin >> myName;
	cout << "What program? ";
	cin >> myProgram;
	cout << "What year are you? ";
	cin >> myYear;
	cout << "From what section? ";
	cin >> mySection;
	
	cout << "What is your grade is prelims? ";
	cin >> myPrelim;
	cout << "What is your midterm grade? ";
	cin >> myMterm;
	cout << "What is your final grade? ";
	cin >> myFgrade;
	
	myAverage = (myPrelim + myMterm + myFgrade) / 3;
	
	cout << "\t--STUDENT INFORMATION--" << endl;
	cout << "Name: " << myName << endl;
	cout << "Program: " << myProgram << endl;
	cout << "Year & Section: " << myYear << "-" << mySection << endl;
	cout << "Prelim Grade: " << myPrelim << endl;
	cout << "Midterm Grade: " << myMterm << endl;
	cout << "Final Grade: " << myFgrade << endl;
	cout << "Final Average: " << myAverage << endl;
	
	if (myAverage >= 75 && myAverage <= 100 ) {
		cout << "Status: PASSED!";
	}
	else if (myAverage >= 60 && myAverage < 75) {
		cout << "Status: FAILED";
	}
	else {
		cout << "Invalid";
	}
	
	return 0;
}
