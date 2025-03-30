#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter three number : ");
    scanf("%d%d",&a,&b);
    a>b?printf("%d is greatest number",a):printf("%d is the greatest number",b);
    a=b?printf("fg"):printf("guff");
    return 0;
}