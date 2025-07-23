#include <iostream>
#include <iomanip> // for manipulators
using namespace std;

int main() {
    double pi = 3.1415926535;

    cout << "Default: " << pi << endl;
    cout << "Fixed: " << fixed << pi << endl;
    cout << "Precision (2): " << fixed << setprecision(2) << pi << endl;

    cout << setw(10) << "Hello" << endl;  // width = 10
    cout << setfill('*')<< setw(10)  << "Hi" << endl; // fills with *

    return 0;
}
