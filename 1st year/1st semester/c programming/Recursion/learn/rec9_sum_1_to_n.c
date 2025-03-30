#include<stdio.h>
int sum(int n)
{
    if(n==0) return 0;
    int rec=n+sum(n-1);
    return rec;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int f=sum(n);
    printf("sum of number from 1 to %d is %d ",n,f);
    return 0;
}