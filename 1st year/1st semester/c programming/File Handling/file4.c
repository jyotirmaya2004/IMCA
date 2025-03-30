#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");  // Open file in write mode
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Writing data to the file
    int age = 25;
    float height = 5.9;
    char name[] = "Alice";

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fprintf(fp, "Height: %.1f\n", height);

    fclose(fp);  // Close the file
    printf("Data written to file successfully.\n");
    return 0;
}
