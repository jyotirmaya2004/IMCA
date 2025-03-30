#include<stdio.h>
int main()
{
    int a;
    printf("The mark of the students =");
    scanf("%d",&a);
    if(a<=100&&a>=30)
    {
     printf("PASS");
     }
    else if(a<30 && a>=0)
     printf("FAIL");
    else
     printf("Enter valid a mark out of 100");
    return 0;
}