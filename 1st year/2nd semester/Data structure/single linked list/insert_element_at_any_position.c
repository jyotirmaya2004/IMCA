//insert at any position
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
void insert(int,int);
int main()
{
    int n,num,num2,pos;
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
    printf("\nDo you want to insert element at any position (y/n): ");
    while ((getchar()) != '\n'); // Clear the input buffer
    scanf("%c",&ch1);
    if (ch1=='y'||ch1=='Y')
    {
        printf("\nEnter element for insertion : ");
        scanf("%d",&num2);
        printf("\nEnter position : ");
        scanf("%d",&pos);
        if(pos>n)
        {
            printf("\nPosition not found");
            return 0;
        }
        insert(num2,pos-1);

        printf("\nDisplay linked list element (after insertion): ");
        display(first);
    }
}
void insert(int num,int pos)
{
    sll *insrt,*insrt2=first,*temp;
    insrt=(sll*)malloc(sizeof(sll));
    insrt->data=num;
    int count=0;
    if (pos == 0) // Handle insertion at the beginning
    {
        insrt->next = first;
        first = insrt;
    }
    else
    {
        while((count)!=pos)
        {
            temp=insrt2;
            insrt2=insrt2->next;
            count++;
        }
        insrt->next=temp->next;
        temp->next=insrt;
    }
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