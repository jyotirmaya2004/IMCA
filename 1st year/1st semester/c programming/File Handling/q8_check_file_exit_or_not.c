#include <stdio.h>

int main() {
    FILE *fp = fopen("file5.txt", "r");
    if (fp == NULL) {
        printf("File does not exist.\n");
    } else {
        printf("File exists.\n");
        fclose(fp);
    }
    return 0;
}
