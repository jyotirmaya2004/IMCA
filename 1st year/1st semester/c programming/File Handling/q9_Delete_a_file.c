//Delete a File Using remove()
#include <stdio.h>

int main() {
    if (remove("file2.txt") == 0) {
        printf("File deleted successfully.\n");
    } else {
        perror("Error deleting file");
    }
    return 0;
}
