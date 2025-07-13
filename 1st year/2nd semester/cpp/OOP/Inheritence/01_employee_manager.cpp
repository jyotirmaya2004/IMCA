
// Problem 1: Employee and Manager Hierarchy
#include <iostream>
using namespace std;

class Employee {
public:
    void work() {
        cout << "Employee is working." << endl;
    }
};

class Manager : public Employee {
public:
    void manage() {
        cout << "Manager is managing the team." << endl;
    }
};

int main() {
    Manager m;
    m.work();
    m.manage();
    return 0;
}
