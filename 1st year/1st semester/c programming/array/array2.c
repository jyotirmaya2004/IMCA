// reverse of a array

#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        }
    for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}