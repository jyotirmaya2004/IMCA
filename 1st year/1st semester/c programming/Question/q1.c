//Find the minimum number in the array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter range of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display array element : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("\nThe smallest number is : %d ",min);
    
}