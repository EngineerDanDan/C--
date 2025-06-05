#include <iostream>
using namespace std;
int main () {
	float pounds, ounces;
	
	cout << "Enter pounds: ";
	cin >> pounds;
	
	ounces = pounds * 16;
	
	cout << pounds << " pounds in onces is: " << ounces << " ounces";
	
	return 0;

}
