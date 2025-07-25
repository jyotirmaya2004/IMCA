#include<stdio.h>
#include<stdlib.h>
int i,j;
void input(int *a,int num)
{
    printf("Enter element to array : \n");
    for(i=0;i<num;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
}

void display(int *b,int num)
{
    printf("Array elements are: \n");
    for(i=0;i<num;i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}
void sorting(int *arr,int n)
{
    // insertion sort algorithm
    for(i=1; i<n-1; i++) 
    {
        j=i;
        while(j>0 && arr[j-1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    input(arr,n);
    display(arr,n);
    sorting(arr,n);
    display(arr,n);
}