#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;

public:
    Student(int r) {
        rollNo = r;
    }

    // Copy Constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1(10);
    Student s2 = s1;  // Copy constructor called

    s1.display();
    s2.display();

    return 0;
}
