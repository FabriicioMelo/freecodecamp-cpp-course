#include <iostream>

using namespace std;

int main()
{
	string color, plural, celebrity;

	cout << "Rosas sao {cor}" << endl;
	cout << "{substantivo no plural} sao azuis" << endl;
	cout << "Eu amo {celebridade}" << endl;

	cout << endl << "Insira uma cor: ";
	getline(cin, color);

	cout << "Insira um substantivo no plural: ";
	getline(cin, plural);

	cout << "Insira o nome de uma celebridade: ";
	getline(cin, celebrity);

	cout << endl << "Rosas sao " << color << endl;
	cout << plural << " sao azuis" << endl;
	cout << "Eu amo " << celebrity << endl;

	return 0;
}
