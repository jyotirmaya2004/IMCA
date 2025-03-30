#include<stdio.h>
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int a=2,b=4;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);

}