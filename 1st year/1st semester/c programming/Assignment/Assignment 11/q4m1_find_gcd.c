#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    int gcd(int,int);
    int res;
    res=gcd(a,b);
    printf("Enter GCD of %d and %d = %d\n",a,b,res);

}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}