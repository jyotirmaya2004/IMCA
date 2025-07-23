#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    void setData(string name, int age) {
        (*this).name = name; // using dot after dereferencing
        (*this).age = age;
    }

    void showData() {
        cout << "Name: " << (*this).name << endl;
        cout << "Age: " << (*this).age << endl;
    }
};

int main() {
    Person p1;
    p1.setData("Rahul", 21);
    p1.showData();
    return 0;
}
