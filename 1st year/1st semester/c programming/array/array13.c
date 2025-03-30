#include<stdio.h>
int main()
{
    int n,i,j=0,count=0;
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
    for ( i = 0; i < n; i++)
    {
        if(b[i]!=a[i])
            break;
        else
            count++;
    }
    printf("\n");
    if(count==n)
        printf("yes,it is a palindrome");
    else
        printf("No,it is not s palindrome");
    
}