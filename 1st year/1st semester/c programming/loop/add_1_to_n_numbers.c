#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
     }
    printf("The sum of first 'n' numbers is =%d",sum);
}