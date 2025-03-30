//Check if a File is Empty
#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) {
        printf("The file is empty.\n");
    } else {
        printf("The file is not empty.\n");
    }

    fclose(fp);
    return 0;
}
