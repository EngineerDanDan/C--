#include <iostream>
using namespace std;
int main () {
	
	int myAge;
	
	cout << "How old are you? ";
	cin >> myAge;
	
	if (myAge <= 12) {
		cout << "Still a child";
	}
	else if (myAge <=18) {
		cout << "A teenager!";
	}
	else if (myAge <=64) {
		cout << "An adult";
	}
	else {
		cout << "Senior Citizen!";
	}
	
	return 0;
}
