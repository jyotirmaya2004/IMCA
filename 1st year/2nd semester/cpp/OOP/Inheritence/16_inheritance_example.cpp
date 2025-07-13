
#include <iostream>
using namespace std;

class Base16 {
public:
    void display() {
        cout << "Base class 16" << endl;
    }
};

class Derived16 : public Base16 {
public:
    void show() {
        cout << "Derived class 16" << endl;
    }
};

int main() {
    Derived16 d;
    d.display();
    d.show();
    return 0;
}
