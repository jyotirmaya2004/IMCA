#include<stdio.h>
#include<stdlib.h>
typedef struct single_linked_list
{
	int data;
	struct single_linked_list *next;
}sll;
void create(sll **list1)
{
	sll* curr=(sll*)malloc(sizeof(sll*));
	sll* last=NULL;
	printf("Enter element : ");
	scanf("%d",&curr->data);
	curr->next=NULL;
	if(*list1==NULL)
	{
		*list1=curr=last;
	}
	else
	{
		if (curr->data < (*list1)->data) {
			curr->next = *list1;
			*list1 = curr;
		} else {
			sll* temp = *list1;
			while (temp->next != NULL && temp->next->data < curr->data) {
				temp = temp->next;
			}
			curr->next = temp->next;
			temp->next = curr;
		}
	}

}
void display(sll* node)
{
	while(node!=NULL)
	{
		printf("%d->",node->data);
		node=node->next;
	}
}