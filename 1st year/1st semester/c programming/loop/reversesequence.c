#include<stdio.h>
int main()
{   
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
     printf("%d ",i);
     }
    return 0;
}