
// Pointer to Derived Class via Base Class Pointer
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function." << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();  // Base class function (no virtual)
    return 0;
}
