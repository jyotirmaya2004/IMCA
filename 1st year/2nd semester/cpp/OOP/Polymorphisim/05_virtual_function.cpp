
// Virtual Function Example
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display." << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display." << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->display();  // Derived class display (because of virtual)
    return 0;
}
