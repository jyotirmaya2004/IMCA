#include <stdio.h>
int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    return sum;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    printf("Sum: %d\n", sumArray(arr, 5));
    return 0;
}
