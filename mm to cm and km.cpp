#include <iostream>
using namespace std;
int main () {
	float millimeter, centimeter, meter, kilometer;
	
	cout << "Enter millimeter: ";
	cin >> millimeter;
	
	centimeter = millimeter / 10;
	meter = millimeter / 1000;
	kilometer = millimeter / 1000000;
	
	cout << millimeter << " in centimeter is: " << centimeter << " cm" << endl;
	cout << millimeter << " in meter is: " << meter << " m" << endl;
	cout << millimeter << " in kilometer is: " << kilometer << " km";
	
	return 0;
}
