#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "data.txt"

typedef struct {
    int id;
    char name[50];
    int quantity;
    float price;
} Product;

void addProduct();
void importStock();
void exportStock();
void viewProducts();
void saveToFile(Product[], int);
int loadFromFile(Product[]);

int main() {
    int choice;
    while (1) {
        printf("\n===== Grocery Store Management =====\n");
        printf("1. Add New Product\n");
        printf("2. Import Stock\n");
        printf("3. Export (Sell) Stock\n");
        printf("4. View Inventory\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addProduct(); break;
            case 2: importStock(); break;
            case 3: exportStock(); break;
            case 4: viewProducts(); break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void addProduct() {
    Product products[100];
    int count = loadFromFile(products);

    printf("\nEnter Product ID: ");
    scanf("%d", &products[count].id);
    printf("Enter Product Name: ");
    scanf("%s", products[count].name);
    printf("Enter Initial Quantity: ");
    scanf("%d", &products[count].quantity);
    printf("Enter Price per Unit: ");
    scanf("%f", &products[count].price);

    count++;
    saveToFile(products, count);
    printf("Product added successfully!\n");
}

void importStock() {
    Product products[100];
    int count = loadFromFile(products);
    int id, qty, found = 0;

    printf("\nEnter Product ID to Import: ");
    scanf("%d", &id);
    printf("Enter Quantity to Add: ");
    scanf("%d", &qty);

    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            products[i].quantity += qty;
            found = 1;
            break;
        }
    }

    if (found) {
        saveToFile(products, count);
        printf("Stock updated successfully!\n");
    } else {
        printf("Product not found!\n");
    }
}

void exportStock() {
    Product products[100];
    int count = loadFromFile(products);
    int id, qty, found = 0;

    printf("\nEnter Product ID to Sell: ");
    scanf("%d", &id);
    printf("Enter Quantity to Sell: ");
    scanf("%d", &qty);

    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            if (products[i].quantity >= qty) {
                products[i].quantity -= qty;
                found = 1;
            } else {
                printf("Not enough stock available!\n");
                return;
            }
            break;
        }
    }

    if (found) {
        saveToFile(products, count);
        printf("Stock exported successfully!\n");
    } else {
        printf("Product not found!\n");
    }
}

void viewProducts() {
    Product products[100];
    int count = loadFromFile(products);

    printf("\n===== Available Products =====\n");
    printf("%-10s %-20s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-20s %-10d %-10.2f\n", products[i].id, products[i].name, products[i].quantity, products[i].price);
    }
}

void saveToFile(Product products[], int count) {
    FILE *file = fopen(FILE_NAME, "wb");
    fwrite(&count, sizeof(int), 1, file);
    fwrite(products, sizeof(Product), count, file);
    fclose(file);
}

int loadFromFile(Product products[]) {
    FILE *file = fopen(FILE_NAME, "rb");
    int count = 0;
    if (file) {
        fread(&count, sizeof(int), 1, file);
        fread(products, sizeof(Product), count, file);
        fclose(file);
    }
    return count;
}
