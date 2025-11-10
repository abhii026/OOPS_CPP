#include <iostream>
using namespace std;

class books
{
public:
    string title;
    string author;
    int pages;
    float price;

    void print()
    {
        cout << "The book " << title << " is written by " << author
             << ". It has " << pages << " pages and is priced at $"
             << price << "." << endl;
    }
};

int main()
{
    books book1;
    book1.title = "The Great Gatsby";
    book1.author = "F. Scott Fitzgerald";
    book1.pages = 180;
    book1.price = 10.99;
    book1.print();
    return 0;
}
