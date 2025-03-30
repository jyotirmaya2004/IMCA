#include<stdio.h>
int main()
{
    int n,r=0;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the reverse of the number %d is ",n);
    while(n>0){
        r = r*10;
        r = r +(n%10);
        n=n/10;

    }
    printf ("%d",r);


}