
#include <iostream>
using namespace std;

class Base14 {
public:
    void display() {
        cout << "Base class 14" << endl;
    }
};

class Derived14 : public Base14 {
public:
    void show() {
        cout << "Derived class 14" << endl;
    }
};

int main() {
    Derived14 d;
    d.display();
    d.show();
    return 0;
}
