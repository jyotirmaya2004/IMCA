
// Virtual Base Class Example
#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "Person information" << endl;
    }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};

class Intern : public Student, public Employee {};

int main() {
    Intern i;
    i.info();  // No ambiguity due to virtual inheritance
    return 0;
}

/* Virtual Base Class
🔹 Definition:
A virtual base class is used to prevent multiple "instances" of a base class when using multiple or hybrid inheritance.*/

/* Problem Without Virtual Base Class:

#include <iostream>
using namespace std;

class A {
public:
    void display() { cout << "Class A\n"; }
};

class B : public A {};
class C : public A {};
class D : public B, public C {};  // A is inherited twice!

int main() {
    D obj;
    // obj.display(); ❌ Ambiguous
}
❗️Error: display() is ambiguous because class D has two copies of A (via B and C).

✅ Using Virtual Base Class to Solve It:

#include <iostream>
using namespace std;

class A {
public:
    void display() { cout << "Class A\n"; }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D obj;
    obj.display();  // ✅ No ambiguity
}
✅ Key Points:
Declared using virtual keyword during inheritance.

Prevents duplication of base class in hierarchy.

Common in hybrid inheritance patterns.*/
