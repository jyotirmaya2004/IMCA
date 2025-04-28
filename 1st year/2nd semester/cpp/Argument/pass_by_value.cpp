/*🔹 A copy of the actual value is passed to the function.
🔹 Changes made inside the function do not affect the original variable.*/
#include<iostream>
using namespace std;

void change(int x) {
    x = x + 10;
}

int main() {
    int a = 5;
    change(a);
    cout << a; // Output: 5 (NO CHANGE)
}
