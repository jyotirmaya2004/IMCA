
#include <iostream>
using namespace std;

class Base6 {
public:
    void display() {
        cout << "Base class 6" << endl;
    }
};

class Derived6 : public Base6 {
public:
    void show() {
        cout << "Derived class 6" << endl;
    }
};

int main() {
    Derived6 d;
    d.display();
    d.show();
    return 0;
}
