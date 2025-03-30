#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Structure to store item details
typedef struct {
    char name[50];
    float price;
    int quantity;
} Item;

// Structure to store customer details
typedef struct {
    char name[50];
    Item items[100];
    int itemCount;
    float total;
    float discount;
    float tax;
} Customer;

// Function to display the bill
void displayBill(Customer customer) {
    printf("\n\n--------- Bill Receipt ---------\n");
    printf("Customer Name: %s\n", customer.name);

    // Print current date and time
    time_t now;
    time(&now);
    printf("Date: %s", ctime(&now));

    printf("Item Name\tPrice\tQuantity\tTotal\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < customer.itemCount; i++) {
        float itemTotal = customer.items[i].price * customer.items[i].quantity;
        printf("%s\t\t%.2f\t%d\t\t%.2f\n", customer.items[i].name, customer.items[i].price, customer.items[i].quantity, itemTotal);
    }
    printf("----------------------------------------\n");
    printf("Subtotal: %.2f\n", customer.total);
    printf("Discount: %.2f\n", customer.discount);
    printf("Tax: %.2f\n", customer.tax);
    printf("Total Amount to Pay: %.2f\n", customer.total - customer.discount + customer.tax);
    printf("----------------------------------------\n");
    printf("Thank you for shopping with us!\n");
}

// Function to save the bill to a file
void saveBillToFile(Customer customer) {
    FILE *file = fopen("bill.txt", "w");
    if (file == NULL) {
        printf("Error saving bill to file!\n");
        return;
    }

    fprintf(file, "--------- Bill Receipt ---------\n");
    fprintf(file, "Customer Name: %s\n", customer.name);

    // Print current date and time
    time_t now;
    time(&now);
    fprintf(file, "Date: %s", ctime(&now));

    fprintf(file, "Item Name\tPrice\tQuantity\tTotal\n");
    fprintf(file, "----------------------------------------\n");
    for (int i = 0; i < customer.itemCount; i++) {
        float itemTotal = customer.items[i].price * customer.items[i].quantity;
        fprintf(file, "%s\t\t%.2f\t%d\t\t%.2f\n", customer.items[i].name, customer.items[i].price, customer.items[i].quantity, itemTotal);
    }
    fprintf(file, "----------------------------------------\n");
    fprintf(file, "Subtotal: %.2f\n", customer.total);
    fprintf(file, "Discount: %.2f\n", customer.discount);
    fprintf(file, "Tax: %.2f\n", customer.tax);
    fprintf(file, "Total Amount to Pay: %.2f\n", customer.total - customer.discount + customer.tax);
    fprintf(file, "----------------------------------------\n");
    fprintf(file, "Thank you for shopping with us!\n");

    fclose(file);
    printf("Bill saved to 'bill.txt'.\n");
}

// Function to calculate the total bill
void calculateTotal(Customer *customer) {
    customer->total = 0;
    for (int i = 0; i < customer->itemCount; i++) {
        customer->total += customer->items[i].price * customer->items[i].quantity;
    }
}

int main() {
    Customer customers[100]; // Array to store multiple customers
    int customerCount = 0;   // Number of customers
    int choice;

    printf("Welcome to the Advanced Billing System!\n");

    while (1) {
        printf("\n1. Add Customer\n2. Add Item to Customer\n3. Generate Bill\n4. Save Bill to File\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add Customer
                if (customerCount < 100) {
                    printf("Enter Customer Name: ");
                    scanf("%s", customers[customerCount].name);
                    customers[customerCount].itemCount = 0;
                    customers[customerCount].total = 0;
                    customers[customerCount].discount = 0;
                    customers[customerCount].tax = 0;
                    customerCount++;
                    printf("Customer added successfully!\n");
                } else {
                    printf("Maximum customers reached!\n");
                }
                break;

            case 2: // Add Item to Customer
                if (customerCount > 0) {
                    int customerIndex;
                    printf("Enter Customer Index (0 to %d): ", customerCount - 1);
                    scanf("%d", &customerIndex);

                    if (customerIndex >= 0 && customerIndex < customerCount) {
                        if (customers[customerIndex].itemCount < 100) {
                            printf("Enter Item Name: ");
                            scanf("%s", customers[customerIndex].items[customers[customerIndex].itemCount].name);
                            printf("Enter Item Price: ");
                            scanf("%f", &customers[customerIndex].items[customers[customerIndex].itemCount].price);
                            printf("Enter Item Quantity: ");
                            scanf("%d", &customers[customerIndex].items[customers[customerIndex].itemCount].quantity);
                            customers[customerIndex].itemCount++;
                            calculateTotal(&customers[customerIndex]);
                            printf("Item added successfully!\n");
                        } else {
                            printf("Maximum items reached for this customer!\n");
                        }
                    } else {
                        printf("Invalid customer index!\n");
                    }
                } else {
                    printf("No customers added yet!\n");
                }
                break;

            case 3: // Generate Bill
                if (customerCount > 0) {
                    int customerIndex;
                    printf("Enter Customer Index (0 to %d): ", customerCount - 1);
                    scanf("%d", &customerIndex);

                    if (customerIndex >= 0 && customerIndex < customerCount) {
                        printf("Enter Discount (in Rs): ");
                        scanf("%f", &customers[customerIndex].discount);
                        printf("Enter Tax (in Rs): ");
                        scanf("%f", &customers[customerIndex].tax);
                        displayBill(customers[customerIndex]);
                    } else {
                        printf("Invalid customer index!\n");
                    }
                } else {
                    printf("No customers added yet!\n");
                }
                break;

            case 4: // Save Bill to File
                if (customerCount > 0) {
                    int customerIndex;
                    printf("Enter Customer Index (0 to %d): ", customerCount - 1);
                    scanf("%d", &customerIndex);

                    if (customerIndex >= 0 && customerIndex < customerCount) {
                        saveBillToFile(customers[customerIndex]);
                    } else {
                        printf("Invalid customer index!\n");
                    }
                } else {
                    printf("No customers added yet!\n");
                }
                break;

            case 5: // Exit
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}