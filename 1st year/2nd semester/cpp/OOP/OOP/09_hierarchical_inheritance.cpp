
#include<iostream>
using namespace std;

class Animal {
    public:
    void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
    public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
    public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    d.sound();
    d.bark();
    c.sound();
    c.meow();
    return 0;
}
