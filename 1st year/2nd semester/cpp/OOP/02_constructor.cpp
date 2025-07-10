
#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s("Bob", 21);
    s.display();
    return 0;
}
