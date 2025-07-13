
// Abstract Class Example
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Area of circle: πr²" << endl;
    }
};

int main() {
    Circle c;
    c.area();
    return 0;
}
