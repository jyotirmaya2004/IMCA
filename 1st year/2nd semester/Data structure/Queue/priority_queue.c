#include<stdio.h>
#include<stdlib.h>
typedef struct pq_node
{
	int info;
	int priority;
	struct pq_node* next;
}node;
typedef struct pqueue{
	node* front;
	node* rear;
}pqueue;

void init_pq(pqueue* pq)
{
	pq->front=pq->rear=NULL;
}
void insertion(pqueue* pq, int value, int priority){
	node* nn=NULL;
	node* temp;
	nn=(node*)malloc(sizeof(node));
	if(nn==NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	nn->info=value;
	nn->priority=priority;
	nn->next=NULL;
	if(pq->front==NULL)
	{
		pq->front=pq->rear=nn;
		printf("\nInsertion is first");
		return;
	}
	temp=pq->front;
	if(nn->priority>temp->priority)
	{
		nn->next=temp;
		pq->front=nn;
		printf("\nInsertion at begin");
		return;
	}
	while((temp->next)&&(nn->priority<=temp->next->priority))
	{
		temp=temp->next;
	}
	if(temp->next==NULL)
	{
		pq->rear->next=nn;
		pq->rear=nn;
		printf("\nInsertion and End");
		return;
	}
	else if(nn->priority>temp->next->priority)
	{
		nn->next=temp->next;
		temp->next=nn;
		printf("\nInsertion at end");
		return;
	}


}
int deletion(pqueue *pq)
{
	if(pq->front==NULL)
	{
		printf("\nEmpty queue");
		exit(1);
	}
	node* temp;
	temp=pq->front;
	pq->front=pq->front->next;
	printf("Dequeued item: %d with priority %d\n", temp->info, temp->priority);
	free(temp);


}
void display(pqueue *pq) {
    if (pq->front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    node* temp = pq->front;
    printf("Priority Queue:\n");
    while (temp != NULL) {
        printf("Data: %d | Priority: %d\n", temp->info, temp->priority);
        temp = temp->next;
    }
}
int main(){
	pqueue pq;
	init_pq(&pq);
	int choice, val,pr;
	while (1)
	{
		printf("\n\t\t\tMenu---------\n \
			1. Insert element \n \
			2. Delete Element \n \
			3. Traverse Queue\n \
			4. Exit\n");
		printf("\nEnter Option: ");
		fflush(stdin);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter Element : ");
			fflush(stdin);
			scanf("%d", &val);
			printf("\nEnter priority : ");
			fflush(stdin);
			scanf("%d", &pr);
			insertion(&pq, val,pr);
			break;
		case 2:
			deletion(&pq);
			break;
		case 3:
			display(&pq);
			break;
		case 4:
			exit(0);
		default:
			fprintf(stderr, "Invalid Option...");
		}
	}

	return 0;

}