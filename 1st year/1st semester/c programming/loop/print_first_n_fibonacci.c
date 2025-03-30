#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("the fibonacci sequence are : %d ",a);
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",a);
    }
    printf("\nthe sum of %d fibonacci number is %d",n,sum);
    return 0;
}