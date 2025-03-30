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
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    printf("\nThe average of array element = %.2f",sum/n);
    
    
    

}