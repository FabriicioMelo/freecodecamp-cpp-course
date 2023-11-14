#include <iostream>

using namespace std;

int main()
{
	int index = 1;
	
	// Primeiro o bloco de código será executado, depois a condição será checada.
	do{
		cout << index << endl;
		index++;
	} while(index <= 5);

	/* Primeiro a condição será checada, depois executa o bloco de código
	 * while(index <= 5){
	 *	count << index << endl;
	 *	index++;
	 * }
	 *
	 */

	return 0;
}
