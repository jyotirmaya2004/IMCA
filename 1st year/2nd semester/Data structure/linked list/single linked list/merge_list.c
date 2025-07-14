#include<stdio.h>
#include<stdlib.h>
typedef struct single
{
	int data;
	struct single *next;
}sll;
void create(sll **);
void display(sll *);
void merge(sll*,sll*,sll**);
sll *traverse(sll *);
void display(sll* );
void freelist(sll* );
int main()
{
	sll *first=NULL,*second=NULL,*third=NULL;
	char ch;
	printf("Enter Element for first list : \n");
	do
	{
		create(&first);
		printf("\nDo you want to add new linked list element (y/n): ");
		fflush(stdin);
		getc(stdin);
		scanf("%c",&ch);
	} while (ch=='y'||ch=='Y');
	printf("Enter Element for second list : \n");
	do
	{
		create(&second);
		printf("\nDo you want to add new linked list element (y/n): ");
		fflush(stdin);
		getc(stdin);
		scanf("%c",&ch);
	} while (ch=='y'||ch=='Y');
	printf("\nDisplay first linked list : \n");
	display(first);
	printf("\nDisplay second linked list : \n");
	display(second);
	merge(first,second,&third);
	freelist(first);
	freelist(second);
	printf("\nDisplay list after merging : ");
	display(third);
	freelist(third);
	printf("\nMemory clear succesfully");

}
void create(sll **list1)
{
	sll *curr=(sll*)malloc(sizeof(sll));
	if(curr==NULL)
	{
		printf("\nmemory allocation failed !!!");
		return;
	}
	printf("\nEnter element : ");
	scanf("%d",&curr->data);
	curr->next=NULL;
	if(*list1==NULL)
	{
		*list1=curr;
	}
	else{
		traverse(*list1)->next=curr;
	}
}
void merge(sll *n1,sll *n2,sll **n3)
{
	sll *node;
	if(n1==NULL)
	{
		printf("\nFirst List not found !!!");
		return;
	}
	if(n2==NULL)
	{
		printf("\nSecond List not found !!!");
		return;
	}
	node=(sll*)malloc(sizeof(sll));
	if(node==NULL)
	{
		printf("\nSecond List not found !!!");
		return;
	}
	node->data=n1->data;
	node->next=NULL;
	n1=n1->next;
	*n3=node;

	while(n1!=NULL)
	{
		node->next=(sll*)malloc(sizeof(sll));
		if(node==NULL)
		{
			printf("\nmemory allocation failed !!!");
			return;
		}
		node=node->next;
		node->data=n1->data;
		node->next=NULL;
		n1=n1->next;

	}
	while(n2!=NULL)
	{
		node->next=(sll*)malloc(sizeof(sll));
		if(node==NULL)
		{
			printf("\nmemory allocation failed !!!");
			return;
		}
		node=node->next;
		node->data=n2->data;
		node->next=NULL;
		n2=n2->next;
	}

}
sll *traverse(sll *node)
{
	sll* prev=NULL;
	while(node!=NULL)
	{
		prev=node;
		node=node->next;
	}
	return prev;
}
void display(sll* node)
{
	printf("\nDisplay linked list element : ");
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
}