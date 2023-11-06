#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string name;
	int age;

	cout << "Digite seu nome:" << endl;
	getline(cin, name);

	cout << "Digite a sua idade:" << endl;
	cin >> age;

	cout << name << " tem " << age << " anos" << endl;


	return 0;
}
