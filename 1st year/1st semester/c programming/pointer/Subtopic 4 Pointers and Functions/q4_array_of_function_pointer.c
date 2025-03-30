#include <stdio.h>

void func1() { printf("Function 1\n"); }
void func2() { printf("Function 2\n"); }
void func3() { printf("Function 3\n"); }

int main() {
    void (*func_ptr_arr[3])() = {func1, func2, func3};  // Array of function pointers

    for (int i = 0; i < 3; i++) {
        func_ptr_arr[i]();  // Call each function
    }
    return 0;
}