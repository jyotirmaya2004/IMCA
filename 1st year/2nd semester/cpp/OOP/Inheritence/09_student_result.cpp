
// Problem 9: Student Result System
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
};

class Marks : public Student {
public:
    int math, science;
};

class Result : public Marks {
public:
    void display() {
        int total = math + science;
        cout << "Roll: " << roll << ", Name: " << name << ", Total Marks: " << total << endl;
    }
};

int main() {
    Result r;
    r.name = "John";
    r.roll = 101;
    r.math = 85;
    r.science = 90;
    r.display();
    return 0;
}
