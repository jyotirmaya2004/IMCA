#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {   // virtual function
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // overriding function
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* ptr;            // base class pointer
    Derived d;            // derived class object
    ptr = &d;

    ptr->show();          // calls Derived's show() due to overriding
    return 0;
}
