#include<stdio.h>
#include<stdlib.h>
typedef struct single_linked_list
{
    int data;
    struct single_linked_list *next;
}sll;
sll *first=NULL,*last,*curr;
void create_list(int);
void display(sll *);
int main()
{
    int n,num;
    printf("Enter number of element : ");
    scanf("%d",&n);
    printf("Enter element to linked list \n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&num);
        create_list(num);
    }
    printf("\nDisplay linked list element : ");
    display(first);
}
void create_list(int num)
{
    curr=(sll*)malloc(sizeof(sll));
    if(curr==NULL)
    {
        printf("Memory allocation failed !!!");
    }
    curr->data=num;
    curr->next=NULL;
    if(first==NULL)
    {
        first=last=curr;
    }
    else
        last->next=curr;
    last=curr;
}
void display(sll *node)
{
    while(node!=0)
    {
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}