#include<stdio.h>
int main()
{
    float x,sum,t;
    int i=1,n;
    printf("Enter the value of x(in radian) : ");
    scanf("%f",&x);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    float nr=x;
    float dr=1;
    sum=x;
    printf("%d iteration result is %f\n",i,sum);
    int sign=1;
    for (int i = 2; i <=n; i++)
    {
        nr=nr*x*x;
        printf("nr%f ",nr);
        dr=dr*(i*2-2)*(i*2-1);
        sign=sign*(-1);
        t=nr/(dr)*sign;
        sum=sum+t;
        printf("%d iteration result is %f %f\n",i,t,sum);
    }
    
    printf("\nvalue of series sin(%.2f) is : %f\n",x,sum);

}