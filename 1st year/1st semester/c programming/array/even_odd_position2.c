#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter element to the array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    int j=0,k=0;
    int b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
            b[j++]=a[i];
        else
            c[k++]=a[i];
    }
    printf("\nthe odd position number are : ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\nthe even position number are : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ",c[i]);
    }
    
    
    
    

}