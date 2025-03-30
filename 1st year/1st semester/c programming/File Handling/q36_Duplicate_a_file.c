//Duplicate a File
#include <stdio.h>

int main() {
    FILE *fp1 = fopen("file.txt", "r");
    FILE *fp2 = fopen("copy.txt", "w");
    if (fp1 == NULL || fp2 == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File duplicated successfully as copy.txt.\n");
    return 0;
}
