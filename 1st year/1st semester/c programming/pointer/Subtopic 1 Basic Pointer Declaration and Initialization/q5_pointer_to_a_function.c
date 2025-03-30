#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*func_ptr)() = greet;  // Pointer to a function
    func_ptr();  // Call the function
    return 0;
}