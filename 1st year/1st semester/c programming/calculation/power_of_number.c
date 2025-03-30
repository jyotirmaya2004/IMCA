#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter base number : ");
    scanf("%d",&a);
    printf("Enter power :");
    scanf("%d",&b);
    c=pow(a,b);
    printf("%d",c);
    return 0;
    
}