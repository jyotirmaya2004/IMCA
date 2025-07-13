
#include <iostream>
using namespace std;

class Base8 {
public:
    void display() {
        cout << "Base class 8" << endl;
    }
};

class Derived8 : public Base8 {
public:
    void show() {
        cout << "Derived class 8" << endl;
    }
};

int main() {
    Derived8 d;
    d.display();
    d.show();
    return 0;
}
