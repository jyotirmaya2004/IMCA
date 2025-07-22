#include <iostream>
using namespace std;

class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;
  Dog d;
  a = &d;
  a->sound(); // Outputs: Dog barks
  return 0;
}
/*C++ Virtual Functions
A virtual function is a member function in the base class that can be overridden in derived classes.

Virtual functions are a key part of polymorphism in C++. They let different objects respond differently to the same function call.

Why Use Virtual Functions?
Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.

With virtual, it checks the actual object the pointer is pointing to.

Or to put it even more simply:

Without virtual: the base function runs, even if the object is from a child class.
With virtual: the child's version runs, like you expect.*/



/*The -> Operator in C++
You might be wondering why we used -> in the examples above.

The -> operator is used to access members (like functions or variables) through a pointer.

It's a shortcut for writing (*pointer).member*/