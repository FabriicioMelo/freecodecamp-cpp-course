#include <iostream>

using namespace std;

int main()
{
    int age = 19;

    cout << "Endereco na memoria" << endl;
    cout <<  &age << endl; // &age <- Endereço da memória da variável "age"

    int *pAge = &age; // Uma variável que armazena o endereço da memória de outra variável, não seu valor

    cout << "Valor dentro do endereco" << endl;
    cout << *pAge << endl; // Obter o valor armazenado dentro do endereço na memória

    return 0;
}