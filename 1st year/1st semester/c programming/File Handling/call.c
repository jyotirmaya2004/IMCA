#include<stdio.h>
int main()
{
    int num,r;
    int find_fact(int);
    int find_rev(int);
    void check_pali(int);
    void check_armstrong(int);
    void check_perfect(int);
    void find_binary(int);
    void part_of_fibo(int);
    void mult_digit(int);
    void check_prime(int);
    printf("Enter a number : ");
    scanf("%d",&num);
    find_fact(num);
    printf("The factorial of  %d = %d \n",num,find_fact(num));
    find_rev(num);
    printf("The reverse of  %d = %d \n",num,find_rev(num));
    check_pali(num);
    check_armstrong(num);
    check_perfect(num);
    find_binary(num);
    part_of_fibo(num);
    mult_digit(num);
    check_prime(num);
}
int find_fact(int n)
{
    int i,fact=1;
    for ( i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return (fact);
}
int find_rev(int n)
{
    int dg=1,n1=n;
    int rev=0;
    while(n>0)
    {dg=n%10;
    rev=rev*10+dg;
    n/=10;
    }
    return (rev);

}
void check_pali(int n)
{
    if (n==find_rev(n))
    {
        printf("%d is a palindrome\n",n);
    }
    else
    {
        printf("%d is not a palindrome\n",n);
    }
    
}
void check_armstrong(int n)
{
    int rem=1,n1=n,count=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        count++;
    }
    int sum=0; 
    rem=1,n=n1;
    while(n>0){
        rem=n%10;
        int t=1;
        for (int i = 0; i < count; i++)
        {
            t*=rem;
        }
        
        sum+=t;
        n=n/10;
    }
    if(n1==sum){
        printf("%d is a armstromg number\n",n1);
    }
    else
        printf("%d is not a armstromg number\n",n1);

}
void check_perfect(int n)
{
    int s=0;
    int i;
    int n1=n;
    for(i=1;i<n;i++){
        if(n%i==0){
        s=s+i;}
    }
    if(n1==s)
     printf("%d is perfect number\n",s);
    else
     printf("%d is not a perfect number\n",n1);
}
void find_binary(int n)
{
    int rem,d=0,base=1;
    while(n>0){
        rem=n%2;
        d=d+rem*base;
        n=n/2;
        base=base*10;

    }
       printf("Binary number is %d\n",d);
}
void part_of_fibo(int n)
{
    int sum=0;
    int a=0;
    int b=1;
    while(sum<n){
        sum=a+b;
        a=b;
        b=sum;
    }
    if(sum==n){
        printf("%d is a fibonacci number\n",n);
    }
    else
        printf("%d is not a fibonacci number\n",n);
}
void mult_digit(int n)
{
    int dg=1,n1=n;
    int mul=1;
    while(n>0)
    {dg=n%10;
    mul*=dg;
    n/=10;
    }
    printf("Multiplication the digit of %d is %d\n",n1,mul);
}
void check_prime(int n)
{
    int a=0;
    for(int i=2;i<=n-1;i++){
     if(n%i==0){
     a=1;
     break;
     }
    }
    if(n==1)printf("%d is neither prime number nor composite\n",n);
    else if (a==0)printf("%d is a prime number\n",n);
    else printf("%d is a composite\n",n); 
}

