#include<stdio.h>
int main ()
{
    int n,d;
    printf("Enter any number for range of array : ");
    scanf("%d",&n);
    n=n*2;
    char a[n];
    printf("Enter array element : ");
    for(int i=0;i<n;i++){
        scanf("%c",&a[i]);
    }
    printf("The array : ");
    for(int i=0;i<n;i++){
        printf("%c",a[i]);
    }
    printf("\nThe new array : ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%c",a[i]);
    }
    
}