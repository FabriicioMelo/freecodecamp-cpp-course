#include <iostream>
#include <cmath>

using namespace std;

double cube(double num)
{
	double result = pow(num, 3); 

	return result;
}

int main()
{
	double answer = cube(5.0);
	
	cout << answer << endl;

	return 0;
}
