
#include<iostream>
using namespace std;

class Book {
    public:
    string title;

    Book() {
        title = "Unknown";
    }

    void display() {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book b;
    b.display();
    return 0;
}
