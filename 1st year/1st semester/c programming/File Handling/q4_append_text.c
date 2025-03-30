#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "a");  // Open file in append mode
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, "This is an appended message.\n");
    fclose(fp);
    printf("Text appended to file1.txt successfully.\n");
    return 0;
}
