#include<stdio.h>
int main()
{
    int n,min;
    printf("Enter range of array : ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter number to the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
        
    }
    printf("\nThe smallest value in the array : %d",min);
    
    
}