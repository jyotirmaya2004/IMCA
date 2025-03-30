/*Creating a single comprehensive program that covers the entire C language concepts through file handling is ambitious. 
However, we can craft a program that demonstrates the major concepts of C programming, such as:

1.Variables and Data Types
2.Control Structures (if, loops, switch)
3.Functions
4.Pointers
5.Arrays and Strings
6.Structures
7.Dynamic Memory Allocation
8.File Handling Operations (read, write, binary, text)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for student data
typedef struct {
    int rollNo;
    char name[50];
    float marks;
} Student;

// Function prototypes
void addStudentRecord();
void displayAllRecords();
void searchStudentRecord();
void updateStudentRecord();
void deleteStudentRecord();
void backupToTextFile();
void restoreFromBackup();

int main() {
    int choice;

    do {
        printf("\n========== Student Management System ==========\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student Record\n");
        printf("4. Update Student Record\n");
        printf("5. Delete Student Record\n");
        printf("6. Backup Records to Text File\n");
        printf("7. Restore Records from Backup\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudentRecord();
                break;
            case 2:
                displayAllRecords();
                break;
            case 3:
                searchStudentRecord();
                break;
            case 4:
                updateStudentRecord();
                break;
            case 5:
                deleteStudentRecord();
                break;
            case 6:
                backupToTextFile();
                break;
            case 7:
                restoreFromBackup();
                break;
            case 8:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

// Function to add a student record to the binary file
void addStudentRecord() {
    FILE *file = fopen("students.dat", "ab");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    getchar(); // Clear newline character from buffer
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove trailing newline
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(Student), 1, file);
    fclose(file);
    printf("Student record added successfully.\n");
}

// Function to display all student records
void displayAllRecords() {
    FILE *file = fopen("students.dat", "rb");
    if (!file) {
        printf("Error opening file or no records found.\n");
        return;
    }

    Student s;
    printf("\n=== Student Records ===\n");
    while (fread(&s, sizeof(Student), 1, file)) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", s.rollNo, s.name, s.marks);
    }

    fclose(file);
}

// Function to search for a student record by roll number
void searchStudentRecord() {
    FILE *file = fopen("students.dat", "rb");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    int rollNo;
    printf("Enter Roll Number to Search: ");
    scanf("%d", &rollNo);

    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, file)) {
        if (s.rollNo == rollNo) {
            printf("Record Found: Roll No: %d, Name: %s, Marks: %.2f\n", s.rollNo, s.name, s.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No record found with Roll No: %d\n", rollNo);
    }

    fclose(file);
}

// Function to update a student record
void updateStudentRecord() {
    FILE *file = fopen("students.dat", "rb+");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    int rollNo;
    printf("Enter Roll Number to Update: ");
    scanf("%d", &rollNo);

    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, file)) {
        if (s.rollNo == rollNo) {
            printf("Current Record: Roll No: %d, Name: %s, Marks: %.2f\n", s.rollNo, s.name, s.marks);
            printf("Enter New Name: ");
            getchar(); // Clear newline character
            fgets(s.name, sizeof(s.name), stdin);
            s.name[strcspn(s.name, "\n")] = '\0';
            printf("Enter New Marks: ");
            scanf("%f", &s.marks);

            fseek(file, -sizeof(Student), SEEK_CUR);
            fwrite(&s, sizeof(Student), 1, file);
            found = 1;
            printf("Record updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("No record found with Roll No: %d\n", rollNo);
    }

    fclose(file);
}

// Function to delete a student record
void deleteStudentRecord() {
    FILE *file = fopen("students.dat", "rb");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    FILE *tempFile = fopen("temp.dat", "wb");
    if (!tempFile) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return;
    }

    int rollNo;
    printf("Enter Roll Number to Delete: ");
    scanf("%d", &rollNo);

    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, file)) {
        if (s.rollNo == rollNo) {
            found = 1;
            printf("Record with Roll No: %d deleted successfully.\n", rollNo);
        } else {
            fwrite(&s, sizeof(Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (!found) {
        printf("No record found with Roll No: %d\n", rollNo);
    }
}

// Function to backup records to a text file
void backupToTextFile() {
    FILE *file = fopen("students.dat", "rb");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    FILE *backupFile = fopen("backup.txt", "w");
    if (!backupFile) {
        printf("Error creating backup file.\n");
        fclose(file);
        return;
    }

    Student s;
    while (fread(&s, sizeof(Student), 1, file)) {
        fprintf(backupFile, "Roll No: %d, Name: %s, Marks: %.2f\n", s.rollNo, s.name, s.marks);
    }

    fclose(file);
    fclose(backupFile);
    printf("Records backed up to backup.txt successfully.\n");
}

// Function to restore records from the backup file
void restoreFromBackup() {
    FILE *backupFile = fopen("backup.txt", "r");
    if (!backupFile) {
        printf("Error opening backup file.\n");
        return;
    }

    FILE *file = fopen("students.dat", "wb");
    if (!file) {
        printf("Error creating binary file.\n");
        fclose(backupFile);
        return;
    }

    Student s;
    while (fscanf(backupFile, "Roll No: %d, Name: %[^\n], Marks: %f\n", &s.rollNo, s.name, &s.marks) == 3) {
        fwrite(&s, sizeof(Student), 1, file);
    }

    fclose(backupFile);
    fclose(file);
    printf("Records restored from backup successfully.\n");
}
