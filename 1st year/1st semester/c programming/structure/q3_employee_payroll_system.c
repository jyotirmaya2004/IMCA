#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

void addEmployee(struct Employee *employees, int *count) {
    printf("Enter ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter Name: ");
    scanf("%s", employees[*count].name);
    printf("Enter Department: ");
    scanf("%s", employees[*count].department);
    printf("Enter Salary: ");
    scanf("%f", &employees[*count].salary);
    (*count)++;
    printf("Employee added successfully!\n");
}

void displayEmployees(struct Employee *employees, int count) {
    printf("\nEmployee Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Department: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

int main() {
    struct Employee employees[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}