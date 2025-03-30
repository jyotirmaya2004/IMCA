#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int num, sum = 0;
    printf("Reading numbers from the file and calculating sum...\n");
    while (1) {
        int result = fscanf(fp, "%d", &num); // Read an integer
        if (result == EOF) {
            break; // End of file
        }
        if (result == 1) { // Successfully read an integer
            sum += num;
            printf("Read number: %d, Current Sum: %d\n", num, sum);
        } else { // Failed to read an integer (e.g., invalid data)
            printf("Invalid input encountered, skipping...\n");
            fseek(fp, 1, SEEK_CUR); // Move file pointer forward
        }
    }

    fclose(fp);
    printf("Sum of numbers: %d\n", sum);
    return 0;
}
