// a c program to rotate left an array of integer values given as run time input
#include<stdio.h>
int main ()
{
    int n,d;
    printf("Enter any number for range of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    fflush(stdin);
    printf("\nEnter the position to rotate : ");
    scanf("%d",&d);
    for(int i=0;i<d;i++)
    {
        int first=a[0];
        for(int j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=first;

    }
    printf("The new array : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}