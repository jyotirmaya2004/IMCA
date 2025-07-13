
// Problem 6: Device and Gadget Inheritance
#include <iostream>
using namespace std;

class Device {
public:
    void powerOn() {
        cout << "Device powered on." << endl;
    }
};

class Laptop : public Device {
public:
    void openLid() {
        cout << "Laptop lid opened." << endl;
    }
};

class Smartphone : public Device {
public:
    void unlock() {
        cout << "Smartphone unlocked." << endl;
    }
};

int main() {
    Laptop l;
    Smartphone s;
    l.powerOn();
    l.openLid();
    s.powerOn();
    s.unlock();
    return 0;
}
