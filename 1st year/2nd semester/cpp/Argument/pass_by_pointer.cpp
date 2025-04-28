/*🔹 We send memory address (pointer) of the variable.
🔹 Function uses that pointer to access and modify the original value.*/
#include<iostream>
using namespace std;

void change(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 5;
    change(&a);
    cout << a; // Output: 15
}
