
#include <iostream>
using namespace std;

class Base9 {
public:
    void display() {
        cout << "Base class 9" << endl;
    }
};

class Derived9 : public Base9 {
public:
    void show() {
        cout << "Derived class 9" << endl;
    }
};

int main() {
    Derived9 d;
    d.display();
    d.show();
    return 0;
}
