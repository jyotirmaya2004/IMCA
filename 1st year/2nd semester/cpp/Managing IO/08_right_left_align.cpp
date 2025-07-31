#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x = 123;
    cout << left << setw(10) << x << " <- Left aligned" << endl;
    cout << right << setw(10) << x << " <- Right aligned" << endl;
    return 0;
}