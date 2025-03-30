//Reverse the Contents of a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    for (long i = size - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        putchar(fgetc(fp));
    }

    fclose(fp);
    return 0;
}
