#include<stdio.h>
#include<math.h>
int main()
{
    int num,r;
    int find_fact(double);
    int find_rev(int);
    void check_pali(int);
    void check_armstrong(int);
    void check_perfect(int);
    void find_binary(int);
    void part_of_fibo(int);
    void mult_digit(int);
    void check_prime(int);
    int o=1;
    while(o!=10){
        printf("****************MENU****************\n");
        printf("Input a number and check following\n");
        printf("\t1.Find factorial of a given number\n");
        printf("\t2.Find reverse of a given number\n");
        printf("\t3.Check the number is palindrome or not\n");
        printf("\t4.Check the number is Armstrong number or not\n");
        printf("\t5.Check the number is perfect number or not\n");
        printf("\t6.Find binary of a given number\n");
        printf("\t7.Check the number is part of Fibonacci number series or not\n");
        printf("\t8.Find multiplication of all digits of a given number\n");
        printf("\t9.Check the number is prime or not\n");
        printf("\t10.EXIT\n");
        printf("Choose any option from the above menu : ");
        scanf("%d",&o);
        if(o==1)
            {
                printf("\nEnter a number to find factorial : ");
                scanf("%ld",&num);
                find_fact(num);
                printf("The factorial of  %d = %ld \n",num,find_fact(num));
            }
        else if(o==2)
            {
                printf("\nEnter a number to find reverse of a number : ");
                scanf("%d",&num);
                find_rev(num);
                printf("The reverse of  %d = %d \n",num,find_rev(num));
            }
        else if(o==3)
            {
                printf("\nEnter a number to check palindrome or not : ");
                scanf("%d",&num);
                check_pali(num);
            }
        else if(o==4)
            {
                printf("\nEnter a number to check Armstrong number or not : ");
                scanf("%d",&num);
                check_armstrong(num);
            }
        else if(o==5)
        {
            printf("\nEnter a number to check perfect number or not : ");
            scanf("%d",&num);
            check_perfect(num);
        }
        else if(o==6)
        {
            printf("\nEnter a number to find binary equivalent : ");
            scanf("%d",&num);
            find_binary(num);
        }
        else if(o==7)
        {
            printf("\nEnter a number to check part of fibonacci number or not : ");
            scanf("%d",&num);
            part_of_fibo(num);
        }
        else if(o==8)
        {
            printf("\nEnter a number to multiply all digits : ");
            scanf("%d",&num);
            mult_digit(num);
        }
        else if(o==9)
        {
            printf("\nEnter a number to check prime or not : ");
            scanf("%d",&num);
            check_prime(num);
        }
        else if(o==10)
        {
            printf("\nThank You!!!\n");
        }
        else
            printf("\nEnter a valid option\a\n");

    }
}
int find_fact(double n)
{
    double i,fact=1;
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