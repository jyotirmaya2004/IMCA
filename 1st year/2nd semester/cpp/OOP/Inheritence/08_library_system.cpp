
// Problem 8: Library System Inheritance
#include <iostream>
using namespace std;

class LibraryItem {
public:
    virtual void displayInfo() {
        cout << "General library item." << endl;
    }
};

class Book : public LibraryItem {
public:
    void displayInfo() override {
        cout << "This is a book." << endl;
    }
};

class Magazine : public LibraryItem {
public:
    void displayInfo() override {
        cout << "This is a magazine." << endl;
    }
};

int main() {
    LibraryItem* item;
    Book b;
    Magazine m;
    item = &b;
    item->displayInfo();
    item = &m;
    item->displayInfo();
    return 0;
}
