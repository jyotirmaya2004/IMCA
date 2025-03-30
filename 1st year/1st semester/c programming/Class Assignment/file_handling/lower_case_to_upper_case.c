#include <stdio.h>

int main() {
    FILE *fpInput, *fpOutput;
    char filenameInput[100], filenameOutput[100];
    char line[1024];

    // Ask for the input file name
    printf("Enter the input file name: ");
    scanf("%s", filenameInput);

    // Ask for the output file name
    printf("Enter the output file name: ");
    scanf("%s", filenameOutput);

    // Open the input file
    fpInput = fopen(filenameInput, "r");
    if (fpInput == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file
    fpOutput = fopen(filenameOutput, "w");
    if (fpOutput == NULL) {
        perror("Error opening output file");
        return 1;
    }

    int lineNumber = 1;
    while (fgets(line, sizeof(line), fpInput)) {
        // Convert lowercase to uppercase and write to output file
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                fprintf(fpOutput, "%c", line[i] - 'a' + 'A');
            } else {
                fprintf(fpOutput, "%c", line[i]);
            }
        }
        lineNumber++;
    }

    fclose(fpInput);
    fclose(fpOutput);
    return 0;
}
