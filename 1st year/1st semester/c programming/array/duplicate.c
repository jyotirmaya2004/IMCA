#include<stdio.h>
int main()
{
    int n;
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
    
}