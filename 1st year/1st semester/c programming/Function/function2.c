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
    printf("Enter row number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",combinatin(i,j));
        }
        printf("\n");
    }
}