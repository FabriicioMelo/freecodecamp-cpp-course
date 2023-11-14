#include <iostream>
#include <cmath>

using namespace std;

int main() {
	

	double example_number;
	double example_number2;
	
	example_number = 5;
	example_number2 = 5;
	cout << "We can do "<< example_number << "+" << example_number2 <<" direct to cout: " << example_number+example_number2 << endl;

	cout << "We can use math functions" << endl;

	example_number = 2;
	cout << "Like " << example_number <<" to the power of " << example_number2 << " = " << pow(example_number, example_number2) << endl;
	
	example_number = 36;
	cout << "Like square root of " << example_number << " = " << sqrt(example_number) << endl;
	
	example_number = 5.23;
	cout << "Like round numbers. Ex: " << example_number << " = " << round(example_number) << endl;
	cout << "Like round to the lowest number. Ex: " << example_number << " = " << floor(example_number) << endl;
	cout << "Like round to the highest number. Ex: " << example_number << " = " << ceil(example_number) << endl;

	example_number = 3;
	example_number2 = 6;
	cout << "Like pass the lowest number between: " << example_number << ", " << example_number2 << " = " << fmin(example_number, example_number2) << endl;
	cout << "Like pass the highest number between: " << example_number << ", " << example_number2 << " = " << fmax(example_number, example_number2) << endl;

	return 0;
}
