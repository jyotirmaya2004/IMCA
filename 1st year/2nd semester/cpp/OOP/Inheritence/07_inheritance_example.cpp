
#include <iostream>
using namespace std;

class Base7 {
public:
    void display() {
        cout << "Base class 7" << endl;
    }
};

class Derived7 : public Base7 {
public:
    void show() {
        cout << "Derived class 7" << endl;
    }
};

int main() {
    Derived7 d;
    d.display();
    d.show();
    return 0;
}
