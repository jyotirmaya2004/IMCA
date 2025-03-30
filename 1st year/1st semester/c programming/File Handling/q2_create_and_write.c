#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "w");  // Open file in write mode
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, "Hello, this is a sample message written to the file.\n");
    fclose(fp);
    printf("Message written to file1.txt successfully.\n");
    return 0;
}
