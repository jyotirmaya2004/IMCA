/*Library Management System
This program allows you to:

1.Add a new book to the library.
2.Display all books.
3.Search for a book by title.
4.Delete a book by ID.
5.Count the total number of books.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store book details
typedef struct {
    int id;
    char title[100];
    char author[50];
    int year;
} Book;

// Function prototypes
void addBook();
void displayBooks();
void searchBook();
void deleteBook();
void countBooks();

int main() {
    int choice;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Delete Book by ID\n");
        printf("5. Count Total Books\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                countBooks();
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function to add a new book
void addBook() {
    FILE *fp = fopen("library.dat", "ab");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Book Title: ");
    getchar(); // Consume newline
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = 0; // Remove newline
    printf("Enter Author Name: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = 0; // Remove newline
    printf("Enter Publication Year: ");
    scanf("%d", &b.year);

    fwrite(&b, sizeof(Book), 1, fp);
    fclose(fp);

    printf("Book added successfully.\n");
}

// Function to display all books
void displayBooks() {
    FILE *fp = fopen("library.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    Book b;
    printf("\n--- List of Books ---\n");
    while (fread(&b, sizeof(Book), 1, fp)) {
        printf("ID: %d, Title: %s, Author: %s, Year: %d\n", b.id, b.title, b.author, b.year);
    }

    fclose(fp);
}

// Function to search for a book by title
void searchBook() {
    FILE *fp = fopen("library.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    char searchTitle[100];
    printf("Enter the title of the book to search: ");
    getchar(); // Consume newline
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; // Remove newline

    Book b;
    int found = 0;
    while (fread(&b, sizeof(Book), 1, fp)) {
        if (strcmp(b.title, searchTitle) == 0) {
            printf("\nBook Found:\n");
            printf("ID: %d, Title: %s, Author: %s, Year: %d\n", b.id, b.title, b.author, b.year);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with title '%s' not found.\n", searchTitle);
    }

    fclose(fp);
}

// Function to delete a book by ID
void deleteBook() {
    FILE *fp = fopen("library.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (fp == NULL || temp == NULL) {
        perror("Error opening file");
        return;
    }

    int deleteID, found = 0;
    printf("Enter the ID of the book to delete: ");
    scanf("%d", &deleteID);

    Book b;
    while (fread(&b, sizeof(Book), 1, fp)) {
        if (b.id == deleteID) {
            found = 1;
        } else {
            fwrite(&b, sizeof(Book), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("library.dat");
    rename("temp.dat", "library.dat");

    if (found) {
        printf("Book deleted successfully.\n");
    } else {
        printf("No book found with ID %d.\n", deleteID);
    }
}

// Function to count the total number of books
void countBooks() {
    FILE *fp = fopen("library.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    Book b;
    int count = 0;
    while (fread(&b, sizeof(Book), 1, fp)) {
        count++;
    }

    fclose(fp);
    printf("Total number of books: %d\n", count);
}
