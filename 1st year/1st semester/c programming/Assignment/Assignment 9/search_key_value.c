#include<stdio.h>
int main()
{
    int n,temp,key;
    printf("Enter the range of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter integer values : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the searched key word : ");
    scanf("%d",&key);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            count++;
        }

    }
    printf("The numbeer of element %d is %d",key,count);
    
    
}