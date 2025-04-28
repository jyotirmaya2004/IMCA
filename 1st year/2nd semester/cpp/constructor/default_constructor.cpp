#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Constructor called!" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;   // Object created, Constructor automatically called
    s1.display();

    return 0;
}
