#include<stdio.h>
#include<stdlib.h>
typedef struct single
{
	int data;
	struct single *next;
}sll;
void create(sll **);
void reverse(sll **);
void display(sll *);
sll *traverse(sll *);
void display(sll* );
void freelist(sll* );
int main()
{
	sll *first=NULL;
	char ch,ch1;
	do
	{
		create(&first);
		printf("\nDo you want to add new linked list element (y/n): ");
		fflush(stdin);
		getc(stdin);
		scanf("%c",&ch);
	} while (ch=='y'||ch=='Y');
	display(first);
	printf("\nDo you want to reverse linked list (y/n): ");
	fflush(stdin);
	getc(stdin);
	scanf("%c",&ch1);
	if(ch1=='y'||ch1=='Y')
	{
		reverse(&first);
		printf("\nDisplay element after reverse : ");
		display(first);
	}
	freelist(first);

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
void reverse(sll **node)
{
	if(*node==NULL)
	{
		printf("\nList not found !!!");
		return;
	}
	sll *p1,*p2,*p3;
	p1=*node;
	p2=p1->next;
	p3=p2->next;
	p1->next=NULL;
	p2->next=p1;
	while(p3!=NULL)
	{
		p1=p2;
		p2=p3;
		p3=p3->next;
		p2->next=p1;
	}
	*node=p2;
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
	printf("\nMemory clear succesfully");
}