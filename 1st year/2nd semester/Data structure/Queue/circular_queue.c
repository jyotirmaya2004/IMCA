/*
	PROGRAM FOR CIRCULAR QUEUE ( i.e ARRAY-BASED )
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// data structure for circular queue
typedef struct cquetype
{
	int arr[MAX];
	int front, rear;
} cqueue;

// function to initialise circular Queue
void init_cQ(cqueue *q)
{
	q->front = q->rear = -1;
}

// fucntion to check Queue Empty
int isEmpty_cQ(cqueue *q)
{
	 if (q->front == -1)
		return 1;
	else
		return 0;
}

// fucntion to check Queue full
int isFull_cQ(cqueue *q)
{
	if ((q->rear + 1) % MAX == q->front)
		return 1;
	else
		return 0;
}

// fucntion to insert an element into Queue
void insert_cQ(cqueue *q, int val)
{
	if (isFull_cQ(q))
	{
		printf("\nCircular QUEUE FULL ...");
		exit(1);
	}
	if (q->front == -1) // if empty
	{
		q->front = q->rear = 0;
	}
	else
	{
		q->rear = (q->rear + 1)% MAX;
	}

	q->arr[q->rear] = val;
}

// fucntion to Delete an element from Queue
int delete_cQ(cqueue *q)
{
	int data;
	if (isEmpty_cQ(q))
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
		q->front = (q->front + 1)%MAX;
	return data;
}

// fucntion to Traverse Queue
int traverse_cQ(cqueue *q)
{

	if (isEmpty_cQ(q))
	{
		printf("\nCircular Queue Empty...");
		exit(1);
	}
    int i = q->front;
    printf("Queue: ");
    while (1) {
        printf("%d -> ", q->arr[i]);
        if (i == q->rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main()
{
	cqueue cq;
	int choice, val;

	init_cQ(&cq);

	while (1)
	{
		printf("\n\t\t\tMenu---------\n \
			1. Insert element \n \
			2. Delete Element \n \
			3. Traverse Circular Queue\n \
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
			insert_cQ(&cq, val);
			break;
		case 2:
			printf("\nDeleted Element is : %d", delete_cQ(&cq));
			break;
		case 3:
			traverse_cQ(&cq);
			break;
		case 4:
			exit(0);
		default:
			fprintf(stderr, "Invalid Option...");
		}
	}

	return 0;
}