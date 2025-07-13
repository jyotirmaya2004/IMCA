
#include <iostream>
using namespace std;

class Base20 {
public:
    void display() {
        cout << "Base class 20" << endl;
    }
};

class Derived20 : public Base20 {
public:
    void show() {
        cout << "Derived class 20" << endl;
    }
};

int main() {
    Derived20 d;
    d.display();
    d.show();
    return 0;
}
