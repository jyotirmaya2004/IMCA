#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    int id;
    char name[50];
    char diagnosis[100];
};

struct Doctor {
    int id;
    char name[50];
    char specialization[50];
};

void addPatient(struct Patient *patients, int *count) {
    printf("Enter Patient ID: ");
    scanf("%d", &patients[*count].id);
    printf("Enter Patient Name: ");
    scanf("%s", patients[*count].name);
    printf("Enter Diagnosis: ");
    scanf("%s", patients[*count].diagnosis);
    (*count)++;
    printf("Patient added successfully!\n");
}

void displayPatients(struct Patient *patients, int count) {
    printf("\nPatient Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Diagnosis: %s\n", patients[i].id, patients[i].name, patients[i].diagnosis);
    }
}

int main() {
    struct Patient patients[100];
    int patient_count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Patient\n2. Display Patients\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient(patients, &patient_count);
                break;
            case 2:
                displayPatients(patients, patient_count);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}