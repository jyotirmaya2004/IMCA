#include<stdio.h>
int main()
{
    int num,sum=0,dg,num1;
    printf("Enter a number:");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
        dg=num%10;
        sum=sum+dg;
        num=num/10;
    }
    printf("\nThe sum of digits of num %d=%d",num1,sum);
}