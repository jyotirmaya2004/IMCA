#include<stdio.h>
int main()
{
    int num,num1,mult=1,dg;
    printf("Enter any number : ");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
        dg=num%10;
        num=num/10;
        if(dg%2!=0){
            mult=mult*dg;
        }
    }
    printf("\nThe multipication of odd digits of num %d=%d",num1,mult);
}