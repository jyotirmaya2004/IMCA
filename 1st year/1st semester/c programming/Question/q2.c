//Find the maximum number in the array
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
    int max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("\nThe biggest number is : %d ",max);
    
}