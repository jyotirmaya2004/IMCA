//Write a program to find the frequency of each element in an array
#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], visited[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("Frequency of each element:\n");
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}
