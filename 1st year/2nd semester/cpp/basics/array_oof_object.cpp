#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int price;

    void show() {
        cout << "Book: " << title << ", Price: $" << price << endl;
    }
};

int main() {
    int n;
    cout<<"Enter no of book : ";
    cin>>n;
    Book books[n];  // Array of 3 objects
    for (int i = 0; i < n; i++)
    {
        cout<<"Book "<<i+1<<": "<<endl;
        cout<<"Title : ";
        cin>>books[i].title;
        cout<<"Price : ";
        cin>>books[i].price;
    }
    

    for (int i = 0; i < n; i++) {
        books[i].show();
    }

    return 0;
}
