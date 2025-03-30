#include <stdio.h>

void func1() { printf("Function 1\n"); }
void func2() { printf("Function 2\n"); }

int main() {
    void (*func_ptr)();  // Function pointer
    int choice;

    printf("Enter 1 for func1, 2 for func2: ");
    scanf("%d", &choice);

    if (choice == 1) func_ptr = func1;
    else if (choice == 2) func_ptr = func2;
    else { printf("Invalid choice\n"); return 1; }

    func_ptr();  // Call the selected function
    return 0;
}