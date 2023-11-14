#include <iostream>

using namespace std;

int main()
{
	cout << "Calculadora aberta!\n\n";
	while(1)
	{
		int opcao;
	
		cout << "Qual conta deseja fazer?" << endl;
		cout << "1 - Adicao" << endl;
		cout << "2 - Subtracao" << endl;
		cout << "3 - Multiplicacao" << endl;
		cout << "4 - Divisao" << endl;
		cout << "======================" << endl;
		cout << "9 - Fechar calculadora" << endl;

		cin >> opcao;

		if(opcao == 9)
		{
			break;
		}

		if(opcao < 1 && opcao > 4)
		{
			cout << "Opcao invalida! Tente novamente..." << endl;
			continue;
		}

		double num1;
		double num2;

		cout << "Digite o primeiro numero:" << endl;
		cin >> num1;

		cout << "Digite o segundo numero:" << endl;
		cin >> num2;

		if(opcao == 4 && num2 == 0)
		{
			while(num2 == 0)
			{
				cout << "Erro! Impossivel dividir por 0" << endl;
				cout << "Digite o segundo numero novamente:" << endl;
				cin >> num2;
			}
			
		}

		double resultado;

		if(opcao == 1)
		{
			resultado = num1 + num2;
		}
		else if(opcao == 2)
		{
			resultado = num1 - num2;
		}
		else if(opcao == 3)
		{
			resultado = num1 * num2;
		}
		else if(opcao == 4)
		{
			resultado = num1 / num2;
		}
		
		cout << "=======================" << endl;
		cout << "=======================" << endl;
		cout << "O resultado e: " << resultado << endl;
		cout << "=======================" << endl;
		cout << "=======================" << endl;
		cout << "Fim da conta\n\n"; 

	}

	return 0;
}
