
#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Parent class function" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child class function" << endl;
    }
};

int main() {
    Child c;
    c.display();
    c.show();
    return 0;
}
