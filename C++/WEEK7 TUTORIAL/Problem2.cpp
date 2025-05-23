#include <iostream>
using namespace std;

class Library;  // Forward declaration

class Book {
private:
    string bookName;
    float price;

public:
    Book(string name, float p) : bookName(name), price(p) {}

    // Friend function declaration
    friend void book_price(const Library& lib);
};

class Library {
private:
    Book book;

public:
    Library(Book b) : book(b) {}

    // Friend function definition
    friend void book_price(const Library& lib);
};

void book_price(const Library& lib) {
    cout << "Book Name: " << lib.book.bookName << endl;
    cout << "Price: $" << lib.book.price << endl;
}

int main() {
    Book b1("C++ Programming", 49.99);
    Library lib(b1);

    book_price(lib);

    return 0;
}