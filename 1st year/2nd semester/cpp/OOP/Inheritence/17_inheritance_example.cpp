
#include <iostream>
using namespace std;

class Base17 {
public:
    void display() {
        cout << "Base class 17" << endl;
    }
};

class Derived17 : public Base17 {
public:
    void show() {
        cout << "Derived class 17" << endl;
    }
};

int main() {
    Derived17 d;
    d.display();
    d.show();
    return 0;
}
