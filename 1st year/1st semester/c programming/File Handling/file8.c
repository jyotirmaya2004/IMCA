#include <stdio.h>

int main() {
    FILE *fp = fopen("example.txt", "a+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Writing to the file
    fprintf(fp, "This is a test.\n");

    // Reset file pointer to the beginning
    rewind(fp);

    // Reading from the file
    char buffer[50];
    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Read from file: %s", buffer);
    }

    fclose(fp);
    return 0;
}
