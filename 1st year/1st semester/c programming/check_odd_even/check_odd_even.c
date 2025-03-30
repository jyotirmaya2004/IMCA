#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    if((a/2)*2==a)
     printf("The enter number is even");
    else
     printf("the enter number is odd");
    return 0;
}