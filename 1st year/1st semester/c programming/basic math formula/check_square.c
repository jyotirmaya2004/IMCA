#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers=");
    scanf("%d%d",&a,&b);
    int s,t;
    s=a+b;
    t=a-b;
    printf("(a+b)^2 answer=%d\n",s*s);
    printf("(a-b)^2 answer=%d\n",t*t);
    printf("(a^2-b^2 answer=%d\n",s*t);
    return 0;
}