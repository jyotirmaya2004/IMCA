
#include <iostream>
using namespace std;

class Base18 {
public:
    void display() {
        cout << "Base class 18" << endl;
    }
};

class Derived18 : public Base18 {
public:
    void show() {
        cout << "Derived class 18" << endl;
    }
};

int main() {
    Derived18 d;
    d.display();
    d.show();
    return 0;
}
