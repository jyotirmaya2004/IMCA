
// Problem 4: Shape Area Calculation using Inheritance
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};

int main() {
    Rectangle r(5.0, 3.0);
    cout << "Area of rectangle: " << r.area() << endl;
    return 0;
}
