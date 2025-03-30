#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
     printf("the largest value is %d",a);
    else if (b>a&&b>c)
     printf("the largest value is %d",b);
    else if (c>a&&c>b)
     printf("the largest value is %d",c);
    else 
     printf("all values are equal");
     return 0;
}