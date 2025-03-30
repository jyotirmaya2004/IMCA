//Copy Specific Lines from a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    FILE *output = fopen("output.txt", "w");
    if (fp == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    int line_to_copy = 2, current_line = 1;
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (current_line == line_to_copy) {
            fputs(buffer, output);
        }
        current_line++;
    }

    fclose(fp);
    fclose(output);

    printf("Specific line copied to output.txt successfully.\n");
    return 0;
}
