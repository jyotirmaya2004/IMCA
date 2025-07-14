//insert at first position
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
void insert(int);
int main()
{
    int n,num,num2;
    char ch1;
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
    printf("\nDo you want to insert element at last (y/n): ");
    while ((getchar()) != '\n'); // Clear the input buffer
    scanf("%c",&ch1);
    if (ch1=='y'||ch1=='Y')
    {
        printf("\nEnter element for insertion : ");
        scanf("%d",&num2);
        insert(num2);

    }
    
    printf("\nDisplay linked list element (after insertion): ");
    display(first);
}
void insert(int num)
{
    sll *insrt;
    insrt=(sll*)malloc(sizeof(sll));
    insrt->data=num;
    last->next=insrt;
    insrt->next=NULL;
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