
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],b[n];
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
    int j=0;
    for (int i = n-1; i >=0; i--)
    {
        b[j++]=a[i];
    }
    printf("\nThe reverse of array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
    
    
    

}