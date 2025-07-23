#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    void setData(string name, int age) {
        this->name = name; // 'this->name' is the class variable
        this->age = age;   // 'age' on right is the function argument
    }

    void showData() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};

int main() {
    Person p1;
    p1.setData("Rahul", 21);
    p1.showData();
    return 0;
}


/*✅ Definition of this in C++:
In C++,
this is a pointer that refers to the current object of a class.
It is implicitly passed to all non-static member functions of a class.

🔧 Syntax:
cpp
Copy
Edit
this->member_variable
📌 Uses of this in C++:
To differentiate between class members and function parameters (when they have the same name):

cpp
Copy
Edit
void setValue(int value) {
    this->value = value;
}
To return the current object from a member function:

cpp
Copy
Edit
MyClass& setData(int d) {
    this->data = d;
    return *this;
}
Used in constructor chaining or fluent interfaces:
Useful in method chaining where we want to return the object itself.

To pass the current object as a parameter to another function or method.

Helps in operator overloading to return object references.

🧠 Remember:
this is only available inside non-static member functions.

It is automatically available; you don’t need to declare it.

*/
