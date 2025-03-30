#include<stdio.h>
int main()
{
    int a;
    printf("enter your age:");
    scanf("%d",&a);
    if(a>=18){
        printf("you are adult\n");
        printf("you can vote");
    }
    else
        printf("you are not adult");
    return 0;
}