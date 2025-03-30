#include<stdio.h>
int fact(int x)
{
    int f=1;
    for (int i = 1; i <= x; i++)
    {
        f*=i;
    }
    return f;
}
int combinatin(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of r : ");
    scanf("%d",&r);
    printf("%d",combinatin(n,r));
}