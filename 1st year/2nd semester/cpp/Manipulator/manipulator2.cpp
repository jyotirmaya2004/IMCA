#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left;  // align left

    // Table Header
    cout << setw(10) << "Name"
         << setw(10) << "Math"
         << setw(10) << "Science"
         << setw(10) << "Total" << endl;

    // Table Data
    cout << setw(10) << "Rahul"
         << setw(10) << 85
         << setw(10) << 90
         << setw(10) << (85 + 90) << endl;

    cout << setw(10) << "Priya"
         << setw(10) << 78
         << setw(10) << 88
         << setw(10) << (78 + 88) << endl;

    cout << setw(10) << "Amit"
         << setw(10) << 92
         << setw(10) << 81
         << setw(10) << (92 + 81) << endl;

    return 0;
}
