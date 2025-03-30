#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter range of array 1 : ");
    scanf("%d",&n1);
    printf("Enter range of array 2 : ");
    scanf("%d",&n2);
    int a[n1];
    printf("Enter number to the array 1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n2];
    printf("Enter number to the array 2 : ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Array 1 : ");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nArray 2 : ");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ",b[i]);
    }
    int diff[n1];
    int n3=0;
    for (int i = 0; i < n1; i++)
    {
        int f=0;
        for (int j = 0; j <n2; j++)
        {
            if (a[i]==b[j])
            {
                f=1;
                break;
            }
            
        }
        if (!f)
        {
            int d=0;
            for (int k= 0; k< n3; k++)
            {
                if (diff[k]==a[i])
                {
                    d=1;
                    break;

                }
                
            }
            if (!d)
            {
                diff[n3++]=a[i];
            }
            
            
        }
        
       
        
    }
    
    
    printf("\nDifference(array1-array2) : ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ",diff[i]);
    }
    
}