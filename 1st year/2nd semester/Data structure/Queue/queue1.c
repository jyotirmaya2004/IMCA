/*
	PROGRAM FOR LINEAR QUEUE ( i.e ARRAY-BASED )
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// data structure for Linear queue
typedef struct lquetype
{
	int arr[MAX];
	int front, rear;
} lqueue;

// function to initialise Linear Queue
void init_LQ(lqueue *q)
{
	q->front = q->rear = -1;
}

// fucntion to check Queue Empty
int isEmpty_LQ(lqueue *lq)
{
	if (lq->front == -1)
		return 1;
	else
		return 0;
}

// fucntion to check Queue full
int isFull_LQ(lqueue *lq)
{
	if (lq->rear == (MAX - 1))
		return 1;
	else
		return 0;
}

// fucntion to insert an element into Queue
void insert_LQ(lqueue *q, int val)
{
	if (isFull_LQ(q))
	{
		printf("\nLINEAR QUEUE FULL ...");
		exit(1);
	}
	if (q->front == -1) // if empty
	{
		q->front = q->rear = 0;
	}
	else
	{
		q->rear = (q->rear + 1);
	}

	q->arr[q->rear] = val;
}

// fucntion to Delete an element from Queue
int delete_LQ(lqueue *q)
{
	int data;
	if (isEmpty_LQ(q))
	{
		printf("\nQueue Empty...");
		exit(1);
	}
	data = q->arr[q->front];
	if (q->front == q->rear)
	{
		q->front = q->rear = -1;
	}
	else
		q->front = (q->front + 1);

	return data;
}

// fucntion to Traverse Queue
int traverse_LQ(lqueue *q)
{
	register int i = 0;

	if (isEmpty_LQ(q))
	{
		printf("\nLinear Queue Empty...");
		exit(1);
	}
	printf("\nLinear Queue elements are :\n");
	for (i = q->front; i <= q->rear; i++)
	{
		printf(" %d ", q->arr[i]);
	}
}

int main()
{
	lqueue lq;
	int choice, val;

	init_LQ(&lq);

	while (1)
	{
		printf("\n\t\t\tMenu---------\n \
			1. Insert element \n \
			2. Delete Element \n \
			3. Traverse Linear Queue\n \
			4. Exit\n");
		printf("\nEnter Option: ");
		fflush(stdin);
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter Element: ");
			fflush(stdin);
			scanf("%d", &val);
			insert_LQ(&lq, val);
			break;
		case 2:
			printf("\nDeleted Element is : %d", delete_LQ(&lq));
			break;
		case 3:
			traverse_LQ(&lq);
			break;
		case 4:
			exit(0);
		default:
			fprintf(stderr, "Invalid Option...");
		}
	}

	return 0;
}