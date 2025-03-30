#include<stdio.h>
int power(int m,int n)
{
    if(n==0) return 1;
    int rec=m*power(m,n-1);
    return rec;
}
int main()
{
    int m,n;
    printf("Enter base : ");
    scanf("%d",&m);
    printf("Enter power : ");
    scanf("%d",&n);
    int p=power(m,n);
    printf("%d ^ %d = %d ",m,n,p);
    return 0;
}