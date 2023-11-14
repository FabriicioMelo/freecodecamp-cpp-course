#include <iostream>

using namespace std;

int main()
{
	int secretNum = 0;

	int guessNum;
	int attemps = 0;

	bool outOfGuesses = false;

	while(secretNum != guessNum && !outOfGuesses) {

		if(attemps > 10){
			outOfGuesses = true;
		}

		cout << "Insira seu palpite: ";
		cin >> guessNum;
		
		if(guessNum > secretNum){
			cout << "Esta frio!" << endl;
		} else if(guessNum < secretNum){
			cout << "Esta quente!" << endl; 
		}

		attemps++;

	}

	if(outOfGuesses){
		cout << "Desculpa, mas suas tentativas acabaram!" << endl;
	} else{
		cout << "Parabens! Voce acertou o numero em " << attemps << " tentativas" << endl;
	}

	return 0;
}
