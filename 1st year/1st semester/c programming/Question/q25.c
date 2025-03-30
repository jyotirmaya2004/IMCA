//Write a program to calculate the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    printf("Enter elements of the %dx%d matrix:\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements in the matrix: %d\n", sum);
    return 0;
}
