#include<stdio.h>
int main()
{
    int a=3,b=2,c=5;
    c=a<<b;
    printf("%d\n",c);
    c=a>>b;
    printf("%d\n",c);
    c=a&b;
    printf("%d\n",c);
    c=a|b;
    printf("%d\n",c);
    c=a^b;
    printf("%d\n",c);
    c=~a;
    printf("%d\n",c);

}