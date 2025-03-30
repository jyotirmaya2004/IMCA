#include<stdio.h>
int swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
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
    printf("%d %d",a,b);
}