#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float value = 123.456789;
    cout << fixed << setprecision(2) << "Fixed: " << value << endl;
    cout << scientific << setprecision(2) << "Scientific: " << value << endl;
    return 0;
}