
#include <iostream>
using namespace std;

class Base13 {
public:
    void display() {
        cout << "Base class 13" << endl;
    }
};

class Derived13 : public Base13 {
public:
    void show() {
        cout << "Derived class 13" << endl;
    }
};

int main() {
    Derived13 d;
    d.display();
    d.show();
    return 0;
}
