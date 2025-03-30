/*copy the array elements to the another arrray in reverse order*/
#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("Enter the range array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements to the array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    printf("Display the array in reverse order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
    
    
}