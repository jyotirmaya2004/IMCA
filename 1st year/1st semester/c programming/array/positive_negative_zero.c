#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter element to the array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    int p[n],ne[n],z[n];
    int j=0,k=0,l=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            p[j++]=a[i];
        }
        else if (a[i]<0)
        {
            ne[k++]=a[i];
        }
        else if (a[i]==0)
        {
            z[l++]=a[i];
        }    
    }
    printf("\n%d positive element are : ",j);
    for (int i = 0; i <j; i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n%d negative element are : ",k);
    for (int i = 0; i < k; i++)
    {
        printf("%d ",ne[i]);
    }
    printf("\nThe number of zero present in the array : %d",l);
    
    
    
    
    

}