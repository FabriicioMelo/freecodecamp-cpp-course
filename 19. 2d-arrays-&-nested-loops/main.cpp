#include <iostream>

using namespace std;

int main()
{
	int numberGrid[3][2] = {
		{1,2},
		{3,4},
		{5,6}
	};

	for(int i1 = 0; i1 < 3; i1++){
		for(int i2 = 0; i2 < 2; i2++){
			cout << numberGrid[i1][i2] << endl;
		}
		cout << endl;
	}

	return 0;
}
