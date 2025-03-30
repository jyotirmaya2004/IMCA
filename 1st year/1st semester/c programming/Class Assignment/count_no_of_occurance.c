#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int i, k;
    printf("Enter element : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the number to check no of occurance of the number : ");
    scanf("%d",&k);
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (k==arr[i])
        {
            c++;
        }
        
    }
    printf("The total no of element %d is %d",k,c);
    
}