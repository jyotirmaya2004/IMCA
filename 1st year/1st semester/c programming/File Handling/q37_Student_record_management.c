/*Multi-Concept Program: Student Records Management
This program manages student records using file handling. It allows you to:

1.Add a new student record.
2.Display all student records.
3.Search for a specific student.
4.Delete a student record.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for student records
typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

// Function prototypes
void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n===== Student Records Management =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search for a Student\n");
        printf("4. Delete a Student Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add a new student record
void addStudent() {
    FILE *fp = fopen("students.dat", "ab");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Student Name: ");
    getchar(); // Consume newline
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; // Remove newline
    printf("Enter Student Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);

    printf("Student record added successfully.\n");
}

// Function to display all student records
void displayStudents() {
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    Student s;
    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(Student), 1, fp)) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);
    }

    fclose(fp);
}

// Function to search for a student by ID
void searchStudent() {
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    int searchID, found = 0;
    printf("Enter Student ID to search: ");
    scanf("%d", &searchID);

    Student s;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.id == searchID) {
            printf("\nStudent Found:\n");
            printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No student found with ID %d.\n", searchID);
    }

    fclose(fp);
}

// Function to delete a student record by ID
void deleteStudent() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (fp == NULL || temp == NULL) {
        perror("Error opening file");
        return;
    }

    int deleteID, found = 0;
    printf("Enter Student ID to delete: ");
    scanf("%d", &deleteID);

    Student s;
    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.id == deleteID) {
            found = 1;
        } else {
            fwrite(&s, sizeof(Student), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found) {
        printf("Student record deleted successfully.\n");
    } else {
        printf("No student found with ID %d.\n", deleteID);
    }
}
