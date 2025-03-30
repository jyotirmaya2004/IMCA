#include<stdio.h>
int main()
{
    int n,temp;
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        
        }
    }
    printf("the new array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}