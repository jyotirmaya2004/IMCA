#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int rev(int);
    int reverse;
    reverse=rev(num);
    printf("The reverse of number of %d = %d",num,reverse);

}
int rev(int n)
{
    int rev=0,dg=0,base=10;
    while (n!=0)
    {
        dg=n%10;
        rev=rev*base+dg;
        n=n/10;
    }
    return (rev);
}