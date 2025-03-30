#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student students[] = {{"John", 20}, {"Jane", 22}};
    struct Student *ptr = students;  // Pointer to the first structure

    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d\n", (ptr + i)->name, (ptr + i)->age);
    }
    return 0;
}