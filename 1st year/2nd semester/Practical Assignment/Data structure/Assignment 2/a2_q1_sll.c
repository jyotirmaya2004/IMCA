#include<stdio.h>
#include<stdlib.h>
typedef struct single_list
{
	int data;
	struct single_list *next;
}sll;
void menu();
void create_list(sll **,int);
void insert(int ,int ,sll**);
void sort_list1(sll **head);
int count(sll *);
void reverse(sll **node);
void delete(int,sll**);
sll *traverse(sll *);
void display(sll*);
void freelist(sll*);
int main()
{
	sll* list1=NULL;
	int choice;
	int num2,pos;

    do {
        menu();
        scanf("%d", &choice);

        switch(choice) {
			case 1:
			{
				printf("Creating a list selected.\n");
				int n;
				printf("Enter number of element : ");
				scanf("%d",&n);
				for (int i = 0; i < n; i++)
				{
					create_list(&list1,i+1);
				}
				break;
			}
			case 2:
			{
				printf("Display List selected.\n");
				display(list1);
				break;
			}
			case 3:
			{
				printf("Insert at Position selected.\n");
				printf("\nEnter element for insertion : ");
        		scanf("%d",&num2);
        		printf("\nEnter position : ");
        		scanf("%d",&pos);
        		insert(num2,pos-1,&list1);
				break;
			}
			case 4:
			{
				printf("Reverse the list selected.\n");
				reverse(&list1);
				break;
			}
			case 5:
			{
				printf("Delete from End selected.\n");
				delete(count(list1)-1,&list1);
				break;
			}
			case 6:
			{
				printf("Sorting linked list in ascending order selected\n");
				sort_list1(&list1);
				break;
			}
			case 7:
			{
				printf("\nEXIT.....");
				break;
			}
			default:{
				printf("\nEnter valid option...");
				break;
			}
		}
	}while(choice!=7);
}
void menu()
{
	printf("\n===== Singly Linked List Menu =====\n");
	printf("1. Creating a linked list\n");
	printf("2. Display List\n");
    printf("3. Insert at Position\n");
	printf("4. Reverse the list\n");
	printf("5. Delete from End\n");
    printf("6. Sorting linked list in ascending order\n");
	printf("7. Exit\n");
    printf("Enter your choice: ");

}
void create_list(sll** list,int i)
{
	sll* curr=(sll*)malloc(sizeof(sll));
	if(curr==NULL)
	{
		printf("Memory allocation failed!!");
		exit;
	}
	printf("\nEnter element %d : ",i);
	scanf("%d",&curr->data);
	curr->next=NULL;
	if(*list==NULL)
	{
		*list=curr;
	}
	else
		traverse(*list)->next=curr;
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
void insert(int num,int pos,sll**first)
{
    if(pos>count(*first))
    {
        printf("\nPosition not found");
        return;
    }
    sll *insrt,*insrt2=*first,*temp;
    insrt=(sll*)malloc(sizeof(sll));
    insrt->data=num;
    int count=0;
    if (pos == 0) // Handle insertion at the beginning
    {
        insrt->next = *first;
        *first = insrt;
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
void sort_list1(sll **head)
{
	sll *i, *j;
	int temp;
	for(i = *head; i != NULL; i = i->next)
	{
		for(j = i->next; j != NULL; j = j->next)
		{
			if(i->data > j->data)
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
		}
	}
}
void delete(int pos,sll** first)
{
    int count = 0;
    sll *temp = *first, *prev = NULL;

    if (*first == NULL) // Check if the list is empty
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if (pos == 0) // Handle deletion at the beginning
    {
        *first = temp->next;
        free(temp);
        printf("Node at position %d deleted.\n", pos);
        return;
    }

    // Traverse to the desired position
    while (temp != NULL && count != pos)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) // If position is out of bounds
    {
        printf("Position out of bounds. No node deleted.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node at position %d deleted.\n", pos);
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
void display(sll* node)
{
	printf("\nDisplay linked list element : ");
	while(node!=NULL)
	{
		printf("%d->",node->data);
		node=node->next;
	}
}
int count(sll* node)
{
	int count1=0;
	while (node!=NULL)
	{
		node=node->next;
		count1++;
	}

	return count1;
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
