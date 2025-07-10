
#include<iostream>
using namespace std;

class Shape {
    public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
    public:
    void area() override {
        cout << "Area = length * breadth" << endl;
    }
};

int main() {
    Rectangle r;
    r.area();
    return 0;
}
