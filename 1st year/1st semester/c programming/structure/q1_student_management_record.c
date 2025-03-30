#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void addStudent(struct Student *students, int *count) {
    printf("Enter Roll No: ");
    scanf("%d", &students[*count].roll_no);
    printf("Enter Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudents(struct Student *students, int count) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }
}

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}