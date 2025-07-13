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
void sort_list2(sll **head);
int count(sll *);
void delete(int,sll**);
sll *traverse(sll *);
void display(sll*);
void search(sll*);
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
                printf("Insert at Beginning selected.\n");
				printf("\nEnter element for insertion : ");
        		scanf("%d",&num2);
        		insert(num2,0,&list1);
                break;
            case 3:
                printf("Insert at End selected.\n");
				printf("\nEnter element for insertion : ");
        		scanf("%d",&num2);
        		insert(num2,count(list1)-1,&list1);
                break;
            case 4:
                printf("Insert at Position selected.\n");
				printf("\nEnter element for insertion : ");
        		scanf("%d",&num2);
        		printf("\nEnter position : ");
        		scanf("%d",&pos);
        		insert(num2,pos-1,&list1);
                break;
            case 5:
                printf("Sorting linked list in ascending order selected.\n");
				sort_list1(&list1);
                break;
			case 6:
                printf("Sorting linked list in descending order selected.\n");
				sort_list2(&list1);
                break;
            case 7:
                printf("Delete from Beginning selected.\n");
				delete(0,&list1);
                break;
            case 8:
                printf("Delete from End selected.\n");
				delete(count(list1)-1,&list1);
                break;
            case 9:
                printf("Delete from Position selected.\n");
				printf("Enter the position to delete (0-based index): ");
				scanf("%d", &pos);
				delete(pos,&list1);
                break;
            case 10:
                printf("Search an Element selected.\n");
				search(list1);
                break;
            case 11:
                printf("Display List selected.\n");
				display(list1);
                break;
            case 12:
                printf("Count Nodes selected.\n");
				printf("\nNumber of node : %d\n",count(list1));
                break;
            case 13:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 13);
	freelist(list1);
}
void menu()
{
	printf("\n===== Singly Linked List Menu =====\n");
	printf("1. Creating a linked list\n");
    printf("2. Insert at Beginning\n");
    printf("3. Insert at End\n");
    printf("4. Insert at Position\n");
    printf("5. Sorting linked list in ascending order\n");
	printf("6. Sorting linked list in descending order\n");
    printf("7. Delete from Beginning\n");
    printf("8. Delete from End\n");
    printf("9. Delete from Position\n");
    printf("10. Search an Element\n");
    printf("11. Display List\n");
    printf("12. Count Nodes\n");
    printf("13. Exit\n");
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
void sort_list2(sll **head)
{
	sll *i, *j;
	int temp;
	for(i = *head; i != NULL; i = i->next)
	{
		for(j = i->next; j != NULL; j = j->next)
		{
			if(i->data < j->data)
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
void search(sll* node)
{
	int count1=1,key,flag=0;
	printf("\nEnter element to search : ");
	scanf("%d",&key);
	while (node!=NULL)
	{
		if(node->data==key)
		{
			printf("\nSearch element found at node : %d",count1);
			flag++;
		}
		node=node->next;
		count1++;
	}
	if(flag==0)
		printf("\nElement not found!!!");
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
