
// Problem 2: Vehicle Inheritance Hierarchy
#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

class ElectricCar : public Car {
public:
    void charge() {
        cout << "Electric car is charging." << endl;
    }
};

int main() {
    ElectricCar ec;
    ec.start();
    ec.drive();
    ec.charge();
    return 0;
}
