#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int fibonacci(int);
    int fibo;
    fibo=fibonacci(num);
    printf("The fibonnaci of number of %d term = %d",num,fibo);

}
int fibonacci(int n)
{
    int i,a=0,b=1,fibo=0;
    for (i=1;i<n;i++)
    {
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return (fibo);
}