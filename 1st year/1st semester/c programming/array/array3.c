/*write a program to check whether any of the digits in a number appears more than one */
#include<stdio.h>
int main()
{
    int rem,a[10]={0},i,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        if(a[rem]==1)
            break;
        else
            a[rem]=1;
            n=n/10;
    }
    if(n>0)
        printf("yes ");
    else
        printf("no");

} 