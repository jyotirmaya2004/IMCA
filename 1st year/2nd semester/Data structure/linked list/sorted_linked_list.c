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
void freelist(sll* head) {
    sll* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
	printf("\nMemory clear succesfully");
}
int main()
{
	int n;
	printf("Enter number of linked list element : ");
	scanf("%d",&n);
	sll *first=NULL;
	for (int i = 0; i < n; i++)
	{
		create(&first);
	}
	printf("\nDisplay linked list element : ");
	display(first);
	freelist(first);

}