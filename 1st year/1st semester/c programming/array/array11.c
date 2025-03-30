/*Find product of all the element in the  array*/
#include<stdio.h>
int main()
{
    int i,n,prod=1;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter element to the array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        prod=prod*a[i];
    }
    printf("The product of all element in the array is %d",prod);
    

}