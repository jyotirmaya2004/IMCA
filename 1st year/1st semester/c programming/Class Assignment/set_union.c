#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter range of array 1 : ");
    scanf("%d",&n1);
    printf("Enter range of array 2 : ");
    scanf("%d",&n2);
    int a[n1];
    printf("Enter number to the array 1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n2];
    printf("Enter number to the array 2 : ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Array 1 : ");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nArray 2 : ");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ",b[i]);
    }
    int uni[n1+n2];
    int n3=0;
    for(int i=0;i<n1;i++ )
    {
        int d=0;
        for (int j = 0; j < n3; j++)
        {
            if(uni[j]==a[i])
            {
                d=1;
                break;

            }
        }
        if(!d)
        {
            uni[n3++]=a[i];
        }
        
    }
    for(int i=0;i<n2;i++ )
    {
        int d=0;
        for (int j = 0; j < n3; j++)
        {
            if(uni[j]==b[i])
            {
                d=1;
                break;

            }
        }
        if(!d)
        {
            uni[n3++]=b[i];
        }
        
    }
    printf("\nunion of two array : ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ",uni[i]);
    }
    
}