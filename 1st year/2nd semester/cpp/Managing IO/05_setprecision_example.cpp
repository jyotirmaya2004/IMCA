#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;
    cout << "Default: " << pi << endl;
    cout << "With precision(4): " << setprecision(4) << pi << endl;
    return 0;
}