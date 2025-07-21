#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Parameterized Constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Alice");
    s1.display();

    return 0;
}
