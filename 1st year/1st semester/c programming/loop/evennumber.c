#include<stdio.h>
int main()
{   
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=2;i<=a;i=i+2)
     printf("%d ",i);
    return 0;
}