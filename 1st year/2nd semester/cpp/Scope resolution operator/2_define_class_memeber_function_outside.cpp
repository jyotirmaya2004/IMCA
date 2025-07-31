#include <iostream>
using namespace std;

class A {
public:
    void display();  // Declaration
};

// Definition outside using ::
void A::display() {
    cout << "Function defined outside the class using scope resolution\n";
}

int main() {
    A obj;
    obj.display();
    return 0;
}
