#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;

        Book()
        {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages)
        {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    Book book1("O pequeno principe", "Antoine de Saint-Exupery", 96);

    Book book2;

    cout << "O titulo do primeiro livro e: " << book1.title << endl;
    cout << "O titulo do segundo livro e: " << book2.title << endl;

    return 0;
}