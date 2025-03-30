#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

void callFunction(void (*func_ptr)()) {
    func_ptr();  // Call the function
}

int main() {
    callFunction(greet);  // Output: Hello, World!
    return 0;
}