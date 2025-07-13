
#include <iostream>
using namespace std;

class Base12 {
public:
    void display() {
        cout << "Base class 12" << endl;
    }
};

class Derived12 : public Base12 {
public:
    void show() {
        cout << "Derived class 12" << endl;
    }
};

int main() {
    Derived12 d;
    d.display();
    d.show();
    return 0;
}
