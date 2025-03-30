//Rename a File Using rename()
#include <stdio.h>

int main() {
    if (rename("file1.txt", "renamed_file.txt") == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming file");
    }
    return 0;
}
