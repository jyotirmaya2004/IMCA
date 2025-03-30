#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter the side of the square :");
    scanf("%d",&a);
    int area,circum,volume;
    area=pow(a,2);
    circum=4*a;
    volume=pow(a,3);
    printf("circumferaance= %d\n",circum);
    printf("area= %d\n",area);
    printf("volume= %d\n",volume);
    return 0;
}