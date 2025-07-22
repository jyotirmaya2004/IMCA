/*The -> Operator in C++
You might be wondering why we used -> in the examples above.

The -> operator is used to access members (like functions or variables) through a pointer.

It's a shortcut for writing (*pointer).member*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* s;

    Circle c;
    Square sq;

    s = &c;
    s->draw();  // Output: Drawing Circle

    s = &sq;
    s->draw();  // Output: Drawing Square

    return 0;
}
