#include <stdio.h>
#include <string.h>

// Define the structure
struct emp {
    int id;
    char name[50];
    char addr[50];
    char desig[50];
    char depart[50];
    float bs; // base salary
};

// Function prototypes
void displayRecords(struct emp e[], int n);
void searchById(struct emp e[], int n, int id);
void displayByDepartment(struct emp e[], int n, char dept[]);
void addEmployee(struct emp e[], int *n);
void insertAtPosition(struct emp e[], int *n, int pos);
void provideBonus(struct emp e[], int n, char dept[]);
void deleteById(struct emp e[], int *n, int id);
void deleteLowestPaid(struct emp e[], int *n, char dept[]);
void displayHighestPaid(struct emp e[], int n);
void displayByAddress(struct emp e[], int n, char addr[]);

int main() {
    int n, op = 0;
    printf("Enter number of records: ");
    scanf("%d", &n);
    struct emp e[100]; // Maximum limit of 100 employees

    // Input employee records
    printf("\nEnter employee records:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        getchar(); // To consume newline
        printf("Name: ");
        fgets(e[i].name, 50, stdin);
        e[i].name[strcspn(e[i].name, "\n")] = 0; // Remove newline
        printf("Address: ");
        fgets(e[i].addr, 50, stdin);
        e[i].addr[strcspn(e[i].addr, "\n")] = 0;
        printf("Designation: ");
        fgets(e[i].desig, 50, stdin);
        e[i].desig[strcspn(e[i].desig, "\n")] = 0;
        printf("Department: ");
        fgets(e[i].depart, 50, stdin);
        e[i].depart[strcspn(e[i].depart, "\n")] = 0;
        printf("Base Salary: ");
        scanf("%f", &e[i].bs);
    }

    while (op != 11) {
        // Menu
        printf("\nChoose a task:\n");
        printf("1. Display employee records\n");
        printf("2. Search employee by ID\n");
        printf("3. Display employees by department\n");
        printf("4. Add a new employee\n");
        printf("5. Insert employee at a position\n");
        printf("6. Provide 10%% bonus by department\n");
        printf("7. Delete employee by ID\n");
        printf("8. Delete lowest paid employee by department\n");
        printf("9. Display highest paid employee\n");
        printf("10. Display employees by address\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                displayRecords(e, n);
                break;
            case 2: {
                int id;
                printf("Enter ID to search: ");
                scanf("%d", &id);
                searchById(e, n, id);
                break;
            }
            case 3: {
                char dept[50];
                getchar();
                printf("Enter department: ");
                fgets(dept, 50, stdin);
                dept[strcspn(dept, "\n")] = 0;
                displayByDepartment(e, n, dept);
                break;
            }
            case 4:
                addEmployee(e, &n);
                break;
            case 5: {
                int pos;
                printf("Enter position to insert: ");
                scanf("%d", &pos);
                insertAtPosition(e, &n, pos);
                break;
            }
            case 6: {
                char dept[50];
                getchar();
                printf("Enter department: ");
                fgets(dept, 50, stdin);
                dept[strcspn(dept, "\n")] = 0;
                provideBonus(e, n, dept);
                break;
            }
            case 7: {
                int id;
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                deleteById(e, &n, id);
                break;
            }
            case 8: {
                char dept[50];
                getchar();
                printf("Enter department: ");
                fgets(dept, 50, stdin);
                dept[strcspn(dept, "\n")] = 0;
                deleteLowestPaid(e, &n, dept);
                break;
            }
            case 9:
                displayHighestPaid(e, n);
                break;
            case 10: {
                char addr[50];
                getchar();
                printf("Enter address: ");
                fgets(addr, 50, stdin);
                addr[strcspn(addr, "\n")] = 0;
                displayByAddress(e, n, addr);
                break;
            }
            case 11:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}

// Function implementations
void displayRecords(struct emp e[], int n) {
    printf("\nEmployee Records:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Address: %s, Designation: %s, Department: %s, Base Salary: %.2f\n",
               e[i].id, e[i].name, e[i].addr, e[i].desig, e[i].depart, e[i].bs);
    }
}

void searchById(struct emp e[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (e[i].id == id) {
            printf("ID: %d, Name: %s, Address: %s, Designation: %s, Department: %s, Base Salary: %.2f\n",
                   e[i].id, e[i].name, e[i].addr, e[i].desig, e[i].depart, e[i].bs);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

void displayByDepartment(struct emp e[], int n, char dept[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(e[i].depart, dept) == 0) {
            printf("ID: %d, Name: %s, Address: %s, Designation: %s, Department: %s, Base Salary: %.2f\n",
                   e[i].id, e[i].name, e[i].addr, e[i].desig, e[i].depart, e[i].bs);
        }
    }
}

void addEmployee(struct emp e[], int *n) {
    printf("Enter details of new employee:\n");
    printf("ID: ");
    scanf("%d", &e[*n].id);
    getchar();
    printf("Name: ");
    fgets(e[*n].name, 50, stdin);
    e[*n].name[strcspn(e[*n].name, "\n")] = 0;
    printf("Address: ");
    fgets(e[*n].addr, 50, stdin);
    e[*n].addr[strcspn(e[*n].addr, "\n")] = 0;
    printf("Designation: ");
    fgets(e[*n].desig, 50, stdin);
    e[*n].desig[strcspn(e[*n].desig, "\n")] = 0;
    printf("Department: ");
    fgets(e[*n].depart, 50, stdin);
    e[*n].depart[strcspn(e[*n].depart, "\n")] = 0;
    printf("Base Salary: ");
    scanf("%f", &e[*n].bs);
    (*n)++;
}

void insertAtPosition(struct emp e[], int *n, int pos) {
    if (pos < 1 || pos > *n + 1) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = *n; i >= pos; i--) {
        e[i] = e[i - 1];
    }
    printf("Enter details of new employee:\n");
    printf("ID: ");
    scanf("%d", &e[pos - 1].id);
    getchar();
    printf("Name: ");
    fgets(e[pos - 1].name, 50, stdin);
    e[pos - 1].name[strcspn(e[pos - 1].name, "\n")] = 0;
    printf("Address: ");
    fgets(e[pos - 1].addr, 50, stdin);
    e[pos - 1].addr[strcspn(e[pos - 1].addr, "\n")] = 0;
    printf("Designation: ");
    fgets(e[pos - 1].desig, 50, stdin);
    e[pos - 1].desig[strcspn(e[pos - 1].desig, "\n")] = 0;
    printf("Department: ");
    fgets(e[pos - 1].depart, 50, stdin);
    e[pos - 1].depart[strcspn(e[pos - 1].depart, "\n")] = 0;
    printf("Base Salary: ");
    scanf("%f", &e[pos - 1].bs);
    (*n)++;
}

void provideBonus(struct emp e[], int n, char dept[]) {
    printf("\nEmployees in department '%s' with updated salary:\n", dept);
    for (int i = 0; i < n; i++) {
        if (strcmp(e[i].depart, dept) == 0) {
            e[i].bs += e[i].bs * 0.10; // Adding 10% bonus
            printf("ID: %d, Name: %s, Updated Salary: %.2f\n", e[i].id, e[i].name, e[i].bs);
        }
    }
}

void deleteById(struct emp e[], int *n, int id) {
    int found = 0;
    for (int i = 0; i < *n; i++) {
        if (e[i].id == id) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                e[j] = e[j + 1];
            }
            (*n)--;
            printf("Employee with ID %d has been deleted.\n", id);
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }
}

void deleteLowestPaid(struct emp e[], int *n, char dept[]) {
    int minIndex = -1;
    float minSalary = 1e9; // Large value for initialization
    for (int i = 0; i < *n; i++) {
        if (strcmp(e[i].depart, dept) == 0 && e[i].bs < minSalary) {
            minSalary = e[i].bs;
            minIndex = i;
        }
    }
    if (minIndex != -1) {
        for (int j = minIndex; j < *n - 1; j++) {
            e[j] = e[j + 1];
        }
        (*n)--;
        printf("Lowest paid employee in department '%s' has been deleted.\n", dept);
    } else {
        printf("No employees found in department '%s'.\n", dept);
    }
}

void displayHighestPaid(struct emp e[], int n) {
    float maxSalary = -1;
    int maxIndex = -1;
    for (int i = 0; i < n; i++) {
        if (e[i].bs > maxSalary) {
            maxSalary = e[i].bs;
            maxIndex = i;
        }
    }
    if (maxIndex != -1) {
        printf("Highest Paid Employee:\n");
        printf("ID: %d, Name: %s, Salary: %.2f\n", e[maxIndex].id, e[maxIndex].name, e[maxIndex].bs);
    } else {
        printf("No employees found.\n");
    }
}

void displayByAddress(struct emp e[], int n, char addr[]) {
    int found = 0;
    printf("\nEmployees from address '%s':\n", addr);
    for (int i = 0; i < n; i++) {
        if (strcmp(e[i].addr, addr) == 0) {
            printf("ID: %d, Name: %s, Designation: %s\n", e[i].id, e[i].name, e[i].desig);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found from address '%s'.\n", addr);
    }
}