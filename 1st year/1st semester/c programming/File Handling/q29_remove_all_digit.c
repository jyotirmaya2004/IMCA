//Remove All Digits from a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (!(ch >= '0' && ch <= '9')){
            fputc(ch, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("file1.txt");
    rename("temp.txt", "file1.txt");

    printf("Digits removed successfully.\n");
    return 0;
}
