//a c-programming to print even numbers from 1 to 100//
#include<stdio.h>
int main()
{
    int n,m,i;
    printf("Find odd number\n");
    printf("From : ");scanf("%d",&n);
    printf("To : ");scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}