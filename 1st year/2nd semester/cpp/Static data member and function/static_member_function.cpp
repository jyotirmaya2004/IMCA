#include<iostream>
using namespace std;

class Math {
    static int x; // static data member
public:
    static void showX() { // static member function
        cout << "x = " << x << endl;
    }
};

// Definition of static member
int Math::x = 50;

int main() {
    Math::showX(); // Accessing without object
}
