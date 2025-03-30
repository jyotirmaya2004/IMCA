#include<stdio.h>
#include<math.h>
int fact(float x)
{
    float f=1;
    for(int i=1;i<=x;i++)
    {
        f=f*i;
    }
    return(f);
}
int main()
{
    float x,n;
    float value=0;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the value of n : ");
    scanf("%f",&n);
    int sign=-1;
    for (int i = 0; i < (2*n); i+=2)
    {
        sign*=-1;
        value+=sign*(pow(x,i)/fact(i));
    }
    
    printf("\nvalue of series cos(%.2f) is : %.2f\n",x,value);

}