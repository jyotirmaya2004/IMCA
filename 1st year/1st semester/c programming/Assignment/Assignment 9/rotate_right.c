// a c program to rotate left an array of integer values given as run time input
#include<stdio.h>
int main ()
{
    int n,d;
    printf("Enter any number for range of array : ");
    scanf("%d",&n);
    float a[n];
    printf("Enter array element : ");
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    printf("The array : ");
    for(int i=0;i<n;i++){
        printf("%.2f ",a[i]);
    }
    printf("\nEnter the position to rotate : ");
    scanf("%d",&d);
    for(int i=0;i<d;i++)
    {
        float last=a[n-1];
        for(int j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=last;

    }
    printf("The new array : ");
    for(int i=0;i<n;i++){
        printf("%f ",a[i]);
    }

}