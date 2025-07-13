
// Nesting of Classes Example
#include <iostream>
using namespace std;

class A {
    int x;
public:
    A() : x(5) {}
    class B {
    public:
        void show() {
            cout << "Inside nested class B" << endl;
        }
    };
};

int main() {
    A::B b;
    b.show();
    return 0;
}
