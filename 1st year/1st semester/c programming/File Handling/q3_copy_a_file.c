#include <stdio.h>

int main() {
    FILE *source = fopen("file1.txt", "r");
    FILE *dest = fopen("file2.txt", "w");

    if (source == NULL || dest == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);
    printf("Contents copied to file2.txt successfully.\n");
    return 0;
}
