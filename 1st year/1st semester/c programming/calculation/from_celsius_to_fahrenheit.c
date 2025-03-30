#include<stdio.h>
int main()
{
    float F,C;
    printf("enter celsius value: ");
    scanf("%f",&C);
    F=((9*C)/5)+32;
    printf("fahrenheit=%f",F);
}