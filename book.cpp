#include <string>
#include <iostream>
#include "book.h"

using namespace std;

Book::Book(const string& title, const string& author, int year, int pages)
{
    this->title = title;
    this->author = author;
    this->year = year;
    this->pages = pages;
}

string Book::getTitle() const{
    return title;
}


string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

int Book::getPages() const {
    return pages;
}

void Book::printInfo() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Pages: " << pages << endl;
}