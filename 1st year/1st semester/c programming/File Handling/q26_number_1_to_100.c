// Write Numbers 1 to 100 in a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "a+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    for (int i = 1; i <= 100; i++) {
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);
    printf("Numbers written to numbers.txt successfully.\n");
    return 0;
}
