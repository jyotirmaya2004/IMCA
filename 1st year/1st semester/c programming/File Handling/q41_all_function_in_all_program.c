#include <stdio.h>
#include <stdlib.h>

// Function to write to a file
void writeToFile(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    fprintf(file, "Hello, this is a sample text file.\n");
    fprintf(file, "File handling in C is simple!\n");
    fclose(file);
    printf("File written successfully.\n");
}

// Function to read from a file
void readFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }
    char ch;
    printf("\nContent of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

// Function to append data to a file
void appendToFile(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }
    fprintf(file, "Appending a new line to the file.\n");
    fclose(file);
    printf("Data appended successfully.\n");
}

// Function to read file line by line
void readFileLineByLine(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }
    printf("\nReading file line by line:\n");
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

// Function to delete a file
void deleteFile(const char *filename) {
    if (remove(filename) == 0) {
        printf("\nFile deleted successfully.\n");
    } else {
        printf("\nError deleting file.\n");
    }
}

int main() {
    const char *filename = "sample.txt";

    writeToFile(filename);     // Write data to file
    readFile(filename);        // Read file content
    appendToFile(filename);    // Append data to file
    readFileLineByLine(filename); // Read file line by line
    deleteFile(filename);      // Delete the file

    return 0;
}
