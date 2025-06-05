#include <iostream>
using namespace std;
int main () {
	
	int myDay;

	cout << "Enter the day today (1-7): ";
	cin >> myDay;
	
	if (myDay ==1) {
	cout << "The day today is Sunday";	
	}
	else if (myDay ==2) {
		cout << "The day today is Monday";
	}
	else if (myDay ==3) {
		cout << "The day today is Tuesday";
	}
	else if (myDay ==4) {
		cout << "The day today is Wednesday";
	}
	else if (myDay ==5) {
		cout << "The day today is Thursday";
	}
	else if (myDay ==6) {
		cout << "The day today is Friday";
	}
	else if (myDay ==7) {
		cout << "The day today is Saturday";
	}
else {
	cout << "1 to 7 only.";
}
	return 0;
}
