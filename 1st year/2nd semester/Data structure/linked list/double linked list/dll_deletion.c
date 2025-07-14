#include<stdio.h>
#include<stdlib.h>
typedef struct double_linked_list
{
	struct double_linked_list *prev;
	int data;
	struct double_linked_list *next;
}dll;
void create(dll**);
void display_forward(dll*);
void display_backward(dll*);
void delete(dll**);
dll *traverse(dll*);
void freelist(dll*);
int main()
{
	int n;
	char ch;
	dll *first=NULL;
	printf("Enter number of linked list element : ");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		create(&first);
	}
	printf("\nDisplay element forward direction : ");
	display_forward(first);
	printf("\nDisplay element backward direction : ");
	display_backward(traverse(first));
	fflush(stdin);
	getc(stdin);
	printf("\nDo you want to delete any element : ");
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y')
	{
		delete(&first);
		printf("\n\nAfter deletion : \n\n");
		printf("\nDisplay element forward direction : ");
		display_forward(first);
		printf("\nDisplay element backward direction : ");
		display_backward(traverse(first));
	}
	freelist(first);
}
void create(dll **list)
{
	dll* curr=(dll*)malloc(sizeof(dll));
	if(curr==NULL)
	{
		printf("Memory allocation Failed !!!");
		exit(1);
	}
	fflush(stdin);
	getc(stdin);
	printf("Enter element : ");
	scanf("%d",&curr->data);
	curr->next=NULL;
	curr->prev=NULL;
	if(*list==NULL)
	{
		*list=curr;
	}
	else
	{
		dll* last = traverse(*list);
		last->next = curr;
		curr->prev = last;
	}
}
void delete(dll **list)
{
	int key;
	fflush(stdin);
	getc(stdin);
	printf("Enter element to delete : ");
	scanf("%d",&key);
	dll *temp=*list;
	if(*list==NULL)
	{
		printf("\nNo element to delete");
		return;
	}
	int found = 0;
	while (temp != NULL)
	{
		if (temp->data == key)
		{
			found = 1;
			break;
		}
		temp = temp->next;
	}
	if (!found)
	{
		printf("\nElement not found in the list");
		return;
	}
	else
	{
		if (temp->prev != NULL)
		{
			temp->prev->next = temp->next;
		}
		else
		{
			*list = temp->next;
			if (*list != NULL)
			{
				(*list)->prev = NULL;
			}
		}
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		free(temp);

	}
}
void display_forward(dll *node)
{
	while (node != NULL)
	{
		printf("%d", node->data);
		if (node->next != NULL)
			printf(" -> ");
		node = node->next;
	}
}

void display_backward(dll *node)
{
	while (node != NULL)
	{
		printf("%d", node->data);
		if (node->prev != NULL)
			printf(" <- ");
		node = node->prev;
	}
}

dll *traverse(dll *node)
{
	dll* prev=NULL;
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