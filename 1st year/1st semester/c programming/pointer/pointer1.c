#include<stdio.h>
int main()
{
    int a=5;
    int b=5;
    int* x=&a;
    *x=7;
    int **y=&x;
    printf("%p",x);
    printf("\n%p",&a);
    printf("\n%d",a);
    printf("\n%p",y);
}