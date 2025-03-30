#include<stdio.h>
int main()
{
    float F,C;
    printf("enter farenheit value: ");
    scanf("%f",&F);
    C=((F-32)*5)/9;
    printf("celsius=%f",C);
}