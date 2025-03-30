//Read a Specific Line from a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int target_line = 3, current_line = 1;
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (current_line == target_line) {
            printf("Line %d: %s", target_line, buffer);
            break;
        }
        current_line++;
    }

    if (current_line < target_line) {
        printf("Line %d does not exist.\n", target_line);
    }

    fclose(fp);
    return 0;
}
