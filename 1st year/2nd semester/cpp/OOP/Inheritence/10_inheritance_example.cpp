
#include <iostream>
using namespace std;

class Base10 {
public:
    void display() {
        cout << "Base class 10" << endl;
    }
};

class Derived10 : public Base10 {
public:
    void show() {
        cout << "Derived class 10" << endl;
    }
};

int main() {
    Derived10 d;
    d.display();
    d.show();
    return 0;
}
