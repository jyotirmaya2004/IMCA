#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int isbn;
    int available;
};

void addBook(struct Book *books, int *count) {
    printf("Enter Title: ");
    scanf("%s", books[*count].title);
    printf("Enter Author: ");
    scanf("%s", books[*count].author);
    printf("Enter ISBN: ");
    scanf("%d", &books[*count].isbn);
    books[*count].available = 1;
    (*count)++;
    printf("Book added successfully!\n");
}

void displayBooks(struct Book *books, int count) {
    printf("\nLibrary Books:\n");
    for (int i = 0; i < count; i++) {
        printf("Title: %s, Author: %s, ISBN: %d, Available: %s\n", books[i].title, books[i].author, books[i].isbn, books[i].available ? "Yes" : "No");
    }
}

int main() {
    struct Book books[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Book\n2. Display Books\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}