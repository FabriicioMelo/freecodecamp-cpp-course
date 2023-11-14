#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum)
{
	string dayName;

	switch(dayNum % 7 - 1) {
		case 0:
			dayName = "Domingo";
			break;
		case 1: 
			dayName = "Segunda-feira";
			break;
		case 2:
			dayName = "Terca-feira";
			break;
		case 3:
			dayName = "Quarta-feira";
			break;
		case 4:
			dayName = "Quinta-feira";
			break;
		case 5:
			dayName = "Sexta-feira";
			break;
		case 6:
			dayName = "Sabado";
			break;
		default:
			dayName = "Desconhecido";

	}

	return dayName;
}

int main()
{
	int day;
	
	cout << "Que dia e hoje?" << endl;
	cin >> day;
	
	cout << "Entao, hoje e " << getDayOfWeek(day) << endl;

	return 0;
}
