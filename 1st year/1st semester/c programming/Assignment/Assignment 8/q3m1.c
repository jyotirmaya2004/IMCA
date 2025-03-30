#include<stdio.h>
#include<math.h>
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f=f*i;
    }
    return(f);
}
int main()
{
    int x,n;
    float value=0;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        value+=(pow(x,i)/fact(i));
    }
    
    printf("\nvalue of series e^(%d) is : %.2f\n",x,value);

}