
#include <iostream>
using namespace std;

class Grandparent {
public:
    void funcGP() {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void funcP() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void funcC() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child c;
    c.funcGP();
    c.funcP();
    c.funcC();
    return 0;
}
