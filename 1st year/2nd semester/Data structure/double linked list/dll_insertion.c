#include<stdio.h>
#include<stdlib.h>
typedef struct double_linked_list
{
	struct double_linked_list *prev;
	int data;
	struct double_linked_list *next;
}dll;
void create_list(dll **);
dll *traverse(dll*);
void display_forward(dll*);
void display_backward(dll*);
int count(dll*);
void insertion(dll**);
void freelist(dll*);
int main()
{
	int n;
	dll* first=NULL;
	printf("Enter number of linked llist element : ");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		create_list(&first);
	}
	printf("\nDisplay element in forward direction : ");
	display_forward(first);
	printf("\nDisplay element in backward direction : ");
	display_backward(traverse(first));
	insertion(&first);
	printf("\nDisplay element in forward direction : ");
	display_forward(first);
	printf("\nDisplay element in backward direction : ");
	display_backward(traverse(first));
	freelist(first);
}
void create_list(dll **list)
{
	dll* curr=NULL;
	curr=(dll*)malloc(sizeof(dll));
	if (curr==NULL)
	{
		perror("Memory allocation failed!!!");
		return;
	}
	printf("Enter element : ");
	scanf("%d",&curr->data);
	curr->prev=NULL;
	curr->next=NULL;
	if (*list==NULL)
	{
		*list=curr;
	}
	else
	{
		curr->prev=traverse(*list);
		traverse(*list)->next=curr;
	}


}
void insertion(dll** list)
{
	dll* insert=NULL;
	int pos;
	insert=(dll*)malloc(sizeof(dll));
	if (insert==NULL)
	{
		perror("Memory allocation failed!!!");
		return;
	}
	printf("Enter element to insert : ");
	scanf("%d",&insert->data);
	printf("Enter position (0 index based): ");
	scanf("%d",&pos);
	if (pos>=count(*list))
	{
		printf("\nInvalid position");
		freelist(*list);
		return;
	}

	insert->next=NULL;
	insert->prev=NULL;
	if (*list==NULL)
	{
		*list=insert;
	}
	else
	{
		int count1=0;
		dll* temp=*list;
		while(temp!=NULL&&pos!=count1)
		{
			temp=temp->next;
			count1++;
		}
		insert->next = temp;
		insert->prev = temp->prev;
		if (temp->prev != NULL) {
			temp->prev->next = insert;
		} else {
			*list = insert;
		}
		temp->prev = insert;
	}


}
int count(dll* node)
{
	int n = 0; // Initialize n to 0
	while(node!=NULL)
	{
		node=node->next;
		n++;
	}
	return n;
}

void display_forward(dll *node)
{
	while(node!=NULL)
	{
		printf("%d->",node->data);
		node=node->next;
	}
}
void display_backward(dll *node)
{
	while(node!=NULL)
	{
		printf("%d->",node->data);
		node=node->prev;
	}
}
dll *traverse(dll *node)
{
	dll* prev;
	while(node!=NULL)
	{
		prev=node;
		node=node->next;
	}
	return prev;
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