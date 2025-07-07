
/*
       Implemetation of LINKED QUEUE
*/


#include<stdio.h>
#include<stdlib.h>

// NODE data structure
typedef struct nodetype
{
	int info;
	struct nodetype *next;
}node;

// QUEUE DATA STRUCTURE DEFINITION
typedef struct queuetype
{
	node *front;
	node *rear;
}queue;

// TO INIALISE QUEUE
void init_Queue(queue *qu)
{
	qu->front = qu->rear = NULL;     //POINTS TO NOTHING
}

//  TO ADD AN ELEMENT INTO QUEUE
void insert_Queue(queue *qu,int val)
{
	node *newnode=NULL;
	newnode = (node *)malloc(sizeof(node) );
	if(newnode == NULL )
	{
		printf("\nMEMORY OVERFLOW...");
		return;
	}
	newnode->info = val;
	newnode->next = NULL;

	if( qu->rear == NULL ) //STACK EMPTY
	{
		qu->rear = qu->front = newnode;
		printf("\nInsertion SUCCESSFULL...");
		return;
	}

	qu->rear->next = newnode ;
	qu->rear = newnode ;
	printf("\nInsertion SUCCESSFULL...");
	return ;
}

//TO DELETE FROM QUEUE
int delete_Queue(queue *qu)
{
	int popval = 0;
	node *temp = qu->front;
	if(qu->front == NULL )
	{
		printf("\nQUEUE EMPTY...");
		exit(1);
	}
	else
	{
		popval = temp->info;
		qu->front = qu->front->next;
		free(temp);
	}

	if( qu->front == NULL )
	{
		qu->rear = NULL ;
	}
	return popval;

}

//TO TRAVERSE THE QUEUE
int traverse_LQ(queue *qu)
{
	int popval = 0;
	node *temp = qu->front;
	if(qu->front == NULL )
	{
		printf("\nLinked QUEUE EMPTY...");
		exit(1);
	}
	temp = qu->front ;
	printf("\nLinked Queue Elements are :\n ");
	while(temp)
	{
		printf(" %d ",temp->info);
		temp = temp->next ;
	}

}


//IMPLEMENTATION OF QUEUE i.e main() definition
int main()
{
	queue qu;
	int num,opt;
      //	char ch='y';
	clrscr();
	init_Queue(&qu);
	while(1)
	{       printf("\n\n\t\t\t------------\n\t\t\tQUEUE MENU\n\t\t\t-------------");
		printf("\n\t\t\t1: INSERT ON LINKED QUEUE.\
			\n\t\t\t2: DELETE FROM LINKED QUEUE.\
			\n\t\t\t3: TRAVERSE LINKED QUEUE.\
			\n\t\t\t4: QUIT.\n");
		printf("\nENTER OPTION : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\nENTER DATA TO PUSH: ");
				scanf("%d",&num);
				insert_Queue(&qu,num);
			break;
			case 2:
				num=delete_Queue(&qu);
				printf("\nDELETED ELEMENT IS :  %d",num);
			break;
			case 3:
				traverse_LQ(&qu);
			break;
			case 4:
				exit(0);
			break;
			default :
				printf("\n\t\t\tINVALID OPTION.");
		}

	}
	return 0;
}
