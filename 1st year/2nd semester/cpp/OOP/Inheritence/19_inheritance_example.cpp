
#include <iostream>
using namespace std;

class Base19 {
public:
    void display() {
        cout << "Base class 19" << endl;
    }
};

class Derived19 : public Base19 {
public:
    void show() {
        cout << "Derived class 19" << endl;
    }
};

int main() {
    Derived19 d;
    d.display();
    d.show();
    return 0;
}
