#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s = {"John", 20};
    struct Student *ptr = &s;  // Pointer to struct

    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);  // Output: John, 20
    return 0;
}



