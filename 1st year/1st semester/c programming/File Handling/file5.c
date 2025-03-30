#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");  // Open file in read mode
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Variables to store data
    char name[50];
    int age;
    float height;

    // Reading data from the file
    fscanf(fp, "Name: %s\n", name);
    fscanf(fp, "Age: %d\n", &age);
    fscanf(fp, "Height: %f\n", &height);

    fclose(fp);  // Close the file

    // Display the data
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);

    return 0;
}
