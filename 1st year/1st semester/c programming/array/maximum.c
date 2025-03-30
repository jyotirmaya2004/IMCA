#include<stdio.h>
int main()
{
    int n,max;
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
    max=a[0];
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    printf("\nThe largest value in the array : %d",max);
    
    
}