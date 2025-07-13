
// Virtual Inheritance to Solve Diamond Problem
#include <iostream>
using namespace std;

class A {
public:
    void greet() {
        cout << "Hello from A" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D d;
    d.greet(); // Only one A instance due to virtual inheritance
    return 0;
}
