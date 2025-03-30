//Split a File into Two Equal Parts
#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    FILE *fp1 = fopen("part1.txt", "w");
    FILE *fp2 = fopen("part2.txt", "w");

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    rewind(fp);

    long half = size / 2;
    char ch;
    for (long i = 0; i < half; i++) {
        ch = fgetc(fp);
        fputc(ch, fp1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    printf("File split into part1.txt and part2.txt successfully.\n");
    return 0;
}
