
// Multiple Inner Classes Example
#include <iostream>
using namespace std;

class Department {
public:
    class Faculty {
    public:
        void info() { cout << "Faculty class" << endl; }
    };
    class Student {
    public:
        void info() { cout << "Student class" << endl; }
    };
};

int main() {
    Department::Faculty f;
    Department::Student s;
    f.info();
    s.info();
    return 0;
}
