//Find the second largest number in the array
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
    int lar,slar;
    slar=lar=-2147483648;

    for (int i = 0; i < n; i++)
    {
        if (lar<arr[i])
        {
            slar=lar;
            lar=arr[i];
        }
        
    }
    printf("\nThe largest number is : %d ",lar);
    printf("\nThe second largedt number is : %d ",slar);
    
}