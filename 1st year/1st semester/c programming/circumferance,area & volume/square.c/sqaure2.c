#include<stdio.h>
int main()
{
    int a;
    printf("enter the side of the square:");
    scanf("%d",&a);
    int area,circumferance,volume;
    area=a*a;
    circumferance=4*a;
    volume=a*a*a;
    printf("circumferance=%d\n",circumferance);
    printf("area=%d\n",area);
    printf("volume=%d\n",volume);
    return 0;


}