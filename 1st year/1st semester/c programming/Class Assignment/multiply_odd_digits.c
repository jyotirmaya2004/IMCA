#include<stdio.h>
int main()
{   
    int a;
    long int mult=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("the odd numbers are : ");
    for(int i=1;i<=a;i=i+2){
     printf("%d ",i);
     mult=mult*i;
    }
    printf("\nmultipication of odd number is :%ld",mult);
    return 0;
}