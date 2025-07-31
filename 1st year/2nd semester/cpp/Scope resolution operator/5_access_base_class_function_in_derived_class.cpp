#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function\n";
        Base::show();  // Access base class function using ::
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
