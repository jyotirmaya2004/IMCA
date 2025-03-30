#include<stdio.h>
int isPrime(int num, int i) {
    if (i == 1) {
        return 1; // base case: 1 is a prime number
    } else if (num % i == 0) {
        return 0; // num is divisible by i, so it's not prime
    } else {
        return isPrime(num, i - 1); // recursive call
    }
}
int prime(int a,int b)
{
    if(a>b)
        return 0;
    else if(a<=1)
        return prime(a+1,b);
    else if(isPrime(a,a-1))
    {    
        printf("%d ",a);
        return prime(a+1,b);
    }
    else
        return prime(a+1,b);
}
int main()
{
    int m,n;
    printf("Enter a number range to find prime number ");
    printf("from : ");
    scanf("%d",&m);
    printf("To : ");
    scanf("%d",&n);
    prime(m,n);
 }
