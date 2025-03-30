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
    int del,po,found;
    printf("\nEnter the number to be delete : ");
    scanf("%d",&del);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==del)
        {
            po=i;
            found=1;
            break;
        }
        
    }
    if(found==1)
    {
        
    for(int i=po;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("The new array : ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }
    }
    else
        printf("\nElement %d is not found in the array",del);



    

}