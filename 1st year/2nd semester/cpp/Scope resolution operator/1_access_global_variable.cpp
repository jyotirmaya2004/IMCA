#include <iostream>
using namespace std;

int x = 100;  // Global variable

int main() {
    int x = 50;  // Local variable
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;  // Using scope resolution to access global x
    return 0;
}
