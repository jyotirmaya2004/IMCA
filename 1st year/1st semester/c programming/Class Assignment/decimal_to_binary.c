#include<stdio.h>
int main()
{
    int n,rem,d=0,base=1;
    printf("enter any decimal number : ");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        d=d+rem*base;
        n=n/2;
        base=base*10;

    }
       printf("Binary number is %d",d);
    
    



}