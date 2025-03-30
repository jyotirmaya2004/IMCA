#include<stdio.h>
int swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter swaping\na=%d b=%d",x,y);
    return 0;
}
int main()
{
    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    swap(a,b);
}