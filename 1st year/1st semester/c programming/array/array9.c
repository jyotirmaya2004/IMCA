/*Find minimum value out of all the element in the  array*/
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
    for ( i = 0; i < n; i++)
    {
        if(a[i]<a[i+1])
            a[i+1]=a[i];
    }
    printf("The smallest element in the array is %d",a[n-1]);
    

}