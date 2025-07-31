#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int id = 1;
    string name = "Bob";
    double salary = 12345.678;

    cout << left << setw(10) << "ID" << setw(15) << "Name" << right << setw(12) << "Salary" << endl;
    cout << left << setw(10) << id << setw(15) << name << right << setw(12) << fixed << setprecision(2) << salary << endl;

    return 0;
}