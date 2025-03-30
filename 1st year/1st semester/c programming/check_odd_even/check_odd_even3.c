#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    a%2==0 ?
     printf("The %d is even",a):
     printf("the enter number is odd");
    return 0;
}
