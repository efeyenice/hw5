#include <iostream>
#include <vector>
#include <string>
#include "book.cpp"

using namespace std;

vector<Book> sortVector(vector<Book> &bookCollection);

int main()
{
    int opt = 0;
    vector<Book> bookCollection;

    while(opt != 4)
    {
        cout << "Menu:" << endl << "1. Add a new book" << endl << "2. Display all books" << endl << "3. Search for a book by title" << endl << "4. Exit" << endl 
        << "Enter your choice: ";
        cin >> opt;

        if(opt == 1)
        {
            string title;
            cout << "Enter title: ";
            cin >> title;
            string author;
            cout << "Enter author: ";
            cin >> author;
            int year;
            cout << "Enter year: ";
            cin >> year;
            int pages;
            cout << "Enter pages: ";
            cin >> pages;
            Book newBook(title, author, year, pages);
            bookCollection.push_back(newBook);
        }
        else if(opt == 2 && bookCollection.size())
        {

        }
    }
    return 0;
}