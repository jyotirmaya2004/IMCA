#include<stdio.h>
//check pass or fail with the help of student mark percentage
int main()
{
    int a;
    printf("Enter the mark percentage of student=");
    scanf("%d",&a);
    a>=30&&a<=100? printf("pass") : printf("fail");
    return 0;


}
