/* Given an array of integers with 1 to n elements and the size of the 
 array is n+1. One element is occurring more than once i.e.
 duplicate number is present. Find the duplicate element.*/

//Method : 1

 #include<stdio.h>
 int main()
 {
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter \"%d\" number from 1 to %d (all number mandatory): ",n+1,n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display array : [");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\nThe duplicate number in the array : ");
    for ( i = 0; i < n+1; i++)
    {
        for(j=i+1;j<n+1;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
                break;
            }
        }
    }
    
 }
 

