#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter price: ");
    scanf("%d",&n);
    printf("\nEnter discount(in percentage):");
    scanf("%d",&m);
    float x,y,z;
    x=100-m;
    y=(n*x)/100;
    z=n-y;
    printf("The price of the product= %.2f ",y);
    printf("\nyou save=%.2f",z);
    return 0;

}