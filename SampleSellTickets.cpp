#include <iostream>
using namespace std;
int main () {
	
	int myAge;
	
	cout << "What is your age? ";
	cin >> myAge;
	
	if (myAge <=12) {
		cout << "Ticket for you costs 250 php";
	}
	else if (myAge <= 59) {
		cout << "Ticket for you costs 500 php";
	}
	else {
		cout << "Ticket for you costs 350 php";
	}
	
	return 0;
}
