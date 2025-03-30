#include<stdio.h>
int main()
{
    int x,y=1,n;
    printf("enter a number to find factorial:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
     y=y*x; 
    printf("%d",y);
}