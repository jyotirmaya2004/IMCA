
#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class" << endl;
    }
};

class Child1 : public Parent {
public:
    void show1() {
        cout << "Child1 class" << endl;
    }
};

class Child2 : public Parent {
public:
    void show2() {
        cout << "Child2 class" << endl;
    }
};

int main() {
    Child1 c1;
    Child2 c2;
    c1.show();
    c1.show1();
    c2.show();
    c2.show2();
    return 0;
}
