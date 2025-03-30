#include<stdio.h>
int fact(int n)
{
    if(n==0) return 1;
    int rec=n*fact(n-1);
    return rec;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial of %d is %d ",n,f);
    return 0;
}