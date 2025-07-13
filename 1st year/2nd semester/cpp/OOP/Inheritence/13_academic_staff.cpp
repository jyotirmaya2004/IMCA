
// Problem 3: Academic Staff Inheritance
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void introduce() {
        cout << "Hi, I'm " << name << endl;
    }
};

class Teacher : public Person {
public:
    void teach() {
        cout << "Teaching students." << endl;
    }
};

class Researcher : public Person {
public:
    void research() {
        cout << "Conducting research." << endl;
    }
};

class Professor : public Teacher, public Researcher {
public:
    void publish() {
        cout << "Publishing a paper." << endl;
    }
};

int main() {
    Professor p;
    p.Teacher::name = "Dr. Smith";
    p.Teacher::introduce();
    p.teach();
    p.research();
    p.publish();
    return 0;
}
