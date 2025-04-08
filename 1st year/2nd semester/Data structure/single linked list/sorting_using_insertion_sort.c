#include<stdio.h>
#include<stdlib.h>
typedef struct single_linked_list
{
    int data;
    struct single_linked_list *next;
}sll;
sll *first=NULL,*last,*curr;
void create_list(int);
void sort_list(sll *);
void display(sll *);
sll *traverse(sll*);
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
    printf("\nDisplay linked list element : ");
    display(first);
	sort_list(first);
	printf("\nDisplay linked list element after sorting : ");
    display(first);
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
/*void sorting(int *arr,int n)
{
    // insertion sort algorithm
    for(i=1; i<n-1; i++)
    {
        j=i;
        while(j>0 && arr[j-1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
        }
    }
}*/

//insertion sort

void sort_list(sll *head)
{
	sll *i, *j;
	int temp;
	for(i = head->next; i != NULL; i = i->next)
	{
		j=i;
		while(j!=NULL&&(traverse(j)->data)>(j->data))
		{

			temp = i->data;
			i->data = j->data;
			j->data = temp;
			j=traverse(j);
		}
	}
}
sll *traverse(sll *list)
{
	sll *prev=NULL;
	while(list!=NULL)
	{
		prev=list;
		list=list->next;
	}
	return prev;

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






/*void sort_list(sll *head)
{
	if (head == NULL || head->next == NULL)
		return;

	sll *sorted = NULL; // Initialize the sorted part of the list

	while (head != NULL)
	{
		sll *current = head; // Take the first node from the unsorted list
		head = head->next;  // Move the head to the next node

		// Insert the current node into the sorted list
		if (sorted == NULL || sorted->data >= current->data)
		{
			current->next = sorted;
			sorted = current;
		}
		else
		{
			sll *temp = sorted;
			while (temp->next != NULL && temp->next->data < current->data)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			temp->next = current;
		}
	}

	first = sorted; // Update the head of the list to the sorted list
}*/