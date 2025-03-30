#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Using typedef to create an alias for the structure
typedef struct {
    int roll_no;
    char name[50];
    float marks;
} Student; // 'Student' is now an alias for 'struct Student'

// Function to add a student
void addStudent(Student *students, int *count) {
    printf("Enter Roll No: ");
    scanf("%d", &students[*count].roll_no);
    printf("Enter Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(Student *students, int count) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }
}

// Function to search for a student by roll number
void searchStudent(Student *students, int count) {
    int roll_no;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll_no);

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll_no) {
            printf("Student Found!\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].roll_no, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student with Roll No %d not found!\n", roll_no);
}

int main() {
    Student students[100]; // Array of Student structures
    int count = 0;         // Number of students
    int choice;

    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}