#include<stdio.h>
#include<stdlib.h>
typedef struct double_linked_list
{
	struct double_linked_list *prev;
    int data;
    struct double_linked_list *next;
}dll;
dll *first=NULL,*last,*curr;
void create_list(int);
void display_forward(dll *);
void display_backward(dll*);
void freelist(dll*);
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
    printf("\nDisplay linked list element in forward direction : ");
    display_forward(first);
	printf("\nDisplay linked list element in backward direction : ");
	display_backward(last);
	freelist(first);
}
void create_list(int num)
{
    curr=(dll*)malloc(sizeof(dll));
    if(curr==NULL)
    {
        printf("Memory allocation failed !!!");
    }
    curr->data=num;
    curr->next=NULL;
	curr->prev=NULL;
    if(first==NULL)
    {
        first=last=curr;
    }
    else {
        last->next=curr;
        curr->prev=last;
    }
    last=curr;
}
void display_forward(dll *node)
{
    while(node!=0)
    {
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}
void display_backward(dll *node)
{
    while(node!=0)
    {
        printf("%d ",node->data);
        node=node->prev;
    }
    printf("\n");
}
void freelist(dll* head) {
    dll* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
	printf("\nMemory clear succesfully");
}