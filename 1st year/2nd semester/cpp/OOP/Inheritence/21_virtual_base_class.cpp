
// Virtual Base Class Example
#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "Person information" << endl;
    }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};

class Intern : public Student, public Employee {};

int main() {
    Intern i;
    i.info();  // No ambiguity due to virtual inheritance
    return 0;
}
