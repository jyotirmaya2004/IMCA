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
    printf("\nEnter the element to be search : ");
    int key;
    scanf("%d",&key);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key)
        count++;
    }
    if(count==0)
        printf("\nSearched element is not found");
    else{
        printf("\nsearched element is found ");
        printf("\nno of occurance = %d",count);
    }
    
    
    

}