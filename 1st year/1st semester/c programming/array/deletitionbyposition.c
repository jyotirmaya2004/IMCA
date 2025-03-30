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
    int new,po;
    printf("\nEnter position of number to be deleted : ");
    scanf("%d",&po);
    for(int i=po-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("The new array : ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }



    

}