#include <iostream>
using namespace std;
int main () {
	
	float myGrade;
	
	cout << "What is your GWA: ";
	cin >> myGrade;
	
	if (myGrade <=74) {
		cout << "Failed";
	}
	else if (myGrade < 0 || myGrade > 100)
		 cout << "Invalid";
	else {
		cout << "Passed";
	}
	return 0;
}
