#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void updateStudent(struct Student *ptr) {
    strcpy(ptr->name, "Jane");
    ptr->age = 22;
}

int main() {
    struct Student s = {"John", 20};
    updateStudent(&s);  // Pass pointer to struct

    printf("Name: %s, Age: %d\n", s.name, s.age);  // Output: Name: Jane, Age: 22
    return 0;
}