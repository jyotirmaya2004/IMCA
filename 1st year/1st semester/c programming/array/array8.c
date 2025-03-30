/*descending order of an array*/
#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter number of input : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements to the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The descending order of array : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }


}