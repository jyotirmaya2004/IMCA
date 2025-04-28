/*🔹 No copy is made.
🔹 An alias (nickname) for the original variable is passed.
🔹 Any change inside function directly affects the original variable.*/
#include<iostream>
using namespace std;

void change(int &x) {
    x = x + 10;
}

int main() {
    int a = 5;
    change(a);
    cout << a; // Output: 15 (CHANGED)
}
