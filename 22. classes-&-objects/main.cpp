#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    string name = "Mike";
    double pi = 3.14;
    char favoriteLetter = 'M';

    Book book1;
    book1.title = "O pequeno principe";
    book1.author = "Antoine de Saint-Exupery";
    book1.pages = 96;

    cout << book1.author << " escreveu um famoso livro!" << endl;
    cout << "Seu titulo e: " << book1.title << endl;
    cout << "Com o total de " << book1.pages << " paginas" << endl; 

    return 0;
}