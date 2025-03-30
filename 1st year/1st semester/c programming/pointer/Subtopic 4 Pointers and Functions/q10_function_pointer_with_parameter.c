#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void operate(int (*func_ptr)(int, int), int a, int b) {
    int result = func_ptr(a, b);  // Call the function
    printf("Result: %d\n", result);
}

int main() {
    operate(add, 10, 5);  // Output: Result: 15
    operate(subtract, 10, 5);  // Output: Result: 5
    return 0;
}