#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int id = 101;
    string name = "Alice";
    cout << setw(10) << "ID" << setw(15) << "Name" << endl;
    cout << setw(10) << id << setw(15) << name << endl;
    return 0;
}