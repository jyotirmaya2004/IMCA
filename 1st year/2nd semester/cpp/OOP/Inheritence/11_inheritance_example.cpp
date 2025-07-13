
#include <iostream>
using namespace std;

class Base11 {
public:
    void display() {
        cout << "Base class 11" << endl;
    }
};

class Derived11 : public Base11 {
public:
    void show() {
        cout << "Derived class 11" << endl;
    }
};

int main() {
    Derived11 d;
    d.display();
    d.show();
    return 0;
}
