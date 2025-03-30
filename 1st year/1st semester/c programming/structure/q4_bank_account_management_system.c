#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    int account_no;
    char name[50];
    float balance;
};

void createAccount(struct Account *accounts, int *count) {
    printf("Enter Account Number: ");
    scanf("%d", &accounts[*count].account_no);
    printf("Enter Name: ");
    scanf("%s", accounts[*count].name);
    accounts[*count].balance = 0;
    (*count)++;
    printf("Account created successfully!\n");
}

void deposit(struct Account *accounts, int count) {
    int acc_no;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &acc_no);
    printf("Enter Amount to Deposit: ");
    scanf("%f", &amount);

    for (int i = 0; i < count; i++) {
        if (accounts[i].account_no == acc_no) {
            accounts[i].balance += amount;
            printf("Deposit successful! New Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

void displayAccounts(struct Account *accounts, int count) {
    printf("\nAccount Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Account No: %d, Name: %s, Balance: %.2f\n", accounts[i].account_no, accounts[i].name, accounts[i].balance);
    }
}

int main() {
    struct Account accounts[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Create Account\n2. Deposit\n3. Display Accounts\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                deposit(accounts, count);
                break;
            case 3:
                displayAccounts(accounts, count);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}