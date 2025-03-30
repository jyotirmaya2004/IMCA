#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *arr = (struct Student *)malloc(n * sizeof(struct Student));  // Allocate memory
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name and age for student %d: ", i + 1);
        scanf("%s %d", arr[i].name, &arr[i].age);
    }

    printf("Students: ");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d\n", arr[i].name, arr[i].age);
    }

    free(arr);  // Free memory
    return 0;
}