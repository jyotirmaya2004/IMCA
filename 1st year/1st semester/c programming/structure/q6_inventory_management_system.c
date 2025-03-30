#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void addProduct(struct Product *inventory, int *count) {
    printf("Enter Product ID: ");
    scanf("%d", &inventory[*count].id);
    printf("Enter Product Name: ");
    scanf("%s", inventory[*count].name);
    printf("Enter Quantity: ");
    scanf("%d", &inventory[*count].quantity);
    printf("Enter Price: ");
    scanf("%f", &inventory[*count].price);
    (*count)++;
    printf("Product added successfully!\n");
}

void displayInventory(struct Product *inventory, int count) {
    printf("\nInventory Details:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

int main() {
    struct Product inventory[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Product\n2. Display Inventory\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(inventory, &count);
                break;
            case 2:
                displayInventory(inventory, count);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}