#include<stdio.h>
#include<math.h>
int main()
{
    int a,area,circumferance;
    printf("Enter the radius of circle:");
    scanf("%d",&a);
    int pi =3.14;
    area=pi*pow(a,2);
    circumferance=2*pi*a;
    printf("circumferance= %d\n",circumferance);
    printf("area=%d\n",area);



}