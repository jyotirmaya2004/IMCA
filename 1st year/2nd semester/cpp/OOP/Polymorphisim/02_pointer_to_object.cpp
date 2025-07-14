
// Pointer to Object Example
#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "Displaying person data." << endl;
    }
};

int main() {
    Person p;
    Person* ptr = &p;
    ptr->display();
    return 0;
}
