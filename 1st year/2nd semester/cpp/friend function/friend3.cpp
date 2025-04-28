#include<iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    friend void showArea(Circle c);       // 1st friend function
    friend void showCircumference(Circle c); // 2nd friend function
};

// Friend function to calculate area
void showArea(Circle c) {
    float area = 3.14 * c.radius * c.radius;
    cout << "Area: " << area << endl;
}

// Friend function to calculate circumference
void showCircumference(Circle c) {
    float circumference = 2 * 3.14 * c.radius;
    cout << "Circumference: " << circumference << endl;
}

int main() {
    Circle c1(5);

    showArea(c1);            // call first friend
    showCircumference(c1);   // call second friend

    return 0;
}
