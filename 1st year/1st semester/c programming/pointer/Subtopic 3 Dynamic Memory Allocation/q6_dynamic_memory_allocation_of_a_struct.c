#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));  // Allocate memory
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(ptr->name, "John");
    ptr->age = 20;

    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);  // Output: Name: John, Age: 20

    free(ptr);  // Free memory
    return 0;
}