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
    int eve=0;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
            eve++;
    }
    int b[n-eve];
    int j=0;
    for(int i=0;i<n;i=i+2)
    {
        b[j++]=a[i];
    }
    printf("\nThe odd position number are : ");
    for (int i = 0; i < n-eve; i++)
    {
        printf("%d ",b[i]);
    }
    int c[eve];
    j=0;
    for(int i=1;i<n;i=i+2)
    {
        c[j++]=a[i];
    }
    printf("\nThe even position number are : ");
    for (int i = 0; i < eve; i++)
    {
        printf("%d ",c[i]);
    }
    
    
    

}