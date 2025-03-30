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
    // Bubble sort algorithm
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int search(int* a,int l,int h,int k)
{
    
    int mid=l+(h-l)/2;
    if (l>h)
    {
        return -1;
    }
    
    else if(a[mid]==k)
    {
        return mid;
    }
    else if(a[mid]>k)
    {
        return search(a,l,mid-1,k);
    }
    else if(a[mid]<k)
    {
        return search(a,mid+1,h,k);
    }
}

int main()
{
    int n,found=-1,key;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    input(arr,n);
    display(arr,n);
    sorting(arr,n);
    display(arr,n);
    printf("\nEnter a key element : ");
    scanf("%d",&key);
    int low,high;
    low=0,high=n;
    found=search(arr,low,high,key);
    if(found>=0)
    {
        printf("KEY element found at index : %d ",found);
    }
    else
    {
        printf("Key not found");
    }

}