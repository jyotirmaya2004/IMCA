//Write a program to find the maximum element in each row of a matrix and find the maximum element in each column of a matrix
#include <stdio.h>

int main() {
    int r, c, i, j, max;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    printf("Enter elements of the %dx%d matrix:\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        max = matrix[i][0];
        for (j = 1; j < c; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("Maximum element in row %d: %d\n", i + 1, max);
    }
    for (j = 0; j < c; j++) {
        max = matrix[0][j];
        for (i = 1; i < r; i++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("Maximum element in column %d: %d\n", j + 1, max);
    }
    return 0;
}
