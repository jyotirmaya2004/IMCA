#include <stdio.h>

int main() {
    int n;
    
    // Get array size
    printf("Enter range of array: ");
    scanf("%d", &n);
    
    int a[n + 1];  // Extra space to accommodate new element
    
    // Input array elements
    printf("Enter numbers in the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    int newNum, pos;
    
    // Get new number and position
    printf("\nEnter the new number to insert: ");
    scanf("%d", &newNum);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    
    // Insert new element
    a[pos] = newNum;
    
    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
