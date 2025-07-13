
// Virtual Base + Abstract Class Example
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0; // Abstract
};

class A : virtual public Base {};
class B : virtual public Base {};

class C : public A, public B {
public:
    void show() override {
        cout << "Implemented abstract method in C" << endl;
    }
};

int main() {
    C obj;
    obj.show();
    return 0;
}
