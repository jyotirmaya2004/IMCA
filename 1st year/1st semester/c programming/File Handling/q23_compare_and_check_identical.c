//Compare Two Files and Check if They Are Identical
#include <stdio.h>

int main() {
    FILE *fp1 = fopen("file1.txt", "r");
    FILE *fp2 = fopen("file2.txt", "r");

    if (fp1 == NULL || fp2 == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch1, ch2;
    int is_identical = 1;

    while ((ch1 = fgetc(fp1)) != EOF && (ch2 = fgetc(fp2)) != EOF) {
        if (ch1 != ch2) {
            is_identical = 0;
            break;
        }
    }

    if (is_identical && (fgetc(fp1) == EOF && fgetc(fp2) == EOF)) {
        printf("Files are identical.\n");
    } else {
        printf("Files are different.\n");
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
