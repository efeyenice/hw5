#include <iostream>
#include <vector>
#include <string>
#include "book.cpp"

using namespace std;

void sortVector(vector<Book> &bookCollection);

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
            sortVector(bookCollection);
            for(int i = 0; i < bookCollection.size(); i++)
            {
                bookCollection[i].printInfo();
                cout << "-------------------" << endl;
            }
        }
        else if(opt == 3 && bookCollection.size())
        {
            string searchTitle;
            cout << "Enter the title to search: ";
            cin >> searchTitle;
            bool bookNotFound = true;
            for(int i = 0; i < bookCollection.size(); i++)
            {
                if(searchTitle == bookCollection[i].getTitle())
                {
                    bookCollection[i].printInfo();
                    bookNotFound = false;
                }
            }
            if(bookNotFound)
                cout << "Book not found!" << endl;
        }
        else if(opt == 4)
        {
            cout << "Exiting...";
            return 0;
        }
        else
        {
            cout << "The book collection is currently empty. Please add some books first." << endl;
        }
    }
    return 0;
}



void sortVector(vector<Book> &bookCollection)
{
    int k, loc, numElts = bookCollection.size();
    for(k = 1; k < numElts; k++)
    {
        Book hold = bookCollection[k];
        loc = k;

        while(0 < loc && hold.getTitle() < bookCollection[loc - 1].getTitle())
        {
            bookCollection[loc] = bookCollection[loc -1];
            loc--;
        }
        bookCollection[loc] = hold;
    }

}