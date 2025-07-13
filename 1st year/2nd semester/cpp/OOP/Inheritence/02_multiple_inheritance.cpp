
#include <iostream>
using namespace std;

class A {
public:
    void funcA() {
        cout << "Class A function" << endl;
    }
};

class B {
public:
    void funcB() {
        cout << "Class B function" << endl;
    }
};

class C : public A, public B {
public:
    void funcC() {
        cout << "Class C function" << endl;
    }
};

int main() {
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    return 0;
}
