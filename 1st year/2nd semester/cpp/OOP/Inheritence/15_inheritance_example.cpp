
#include <iostream>
using namespace std;

class Base15 {
public:
    void display() {
        cout << "Base class 15" << endl;
    }
};

class Derived15 : public Base15 {
public:
    void show() {
        cout << "Derived class 15" << endl;
    }
};

int main() {
    Derived15 d;
    d.display();
    d.show();
    return 0;
}
