
#include<iostream>
using namespace std;

class Person {
    public:
    void speak() {
        cout << "Speaking..." << endl;
    }
};

class Student : public Person {
    public:
    void study() {
        cout << "Studying..." << endl;
    }
};

int main() {
    Student s;
    s.speak();
    s.study();
    return 0;
}
