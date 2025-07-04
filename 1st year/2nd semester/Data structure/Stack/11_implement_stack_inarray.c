//program to implement stack using array in C, using stack_arr[0] as the top of the stack
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int first = -1;
void push(int val){
	if(first == MAX - 1){
		printf("\nSTACK OVERFLOW...\n");
		return;
	}
	first++;
	int i;
	for ( i = first; i >0; i--)
	{
		stack_arr[i] = stack_arr[i-1];
	}
	stack_arr[0] = val;

}
void display(){
	if(first == -1){
		printf("\nSTACK IS EMPTY...\n");
		return;
	}
	printf("\nSTACK ELEMENTS:\n");
	for (int i = 0; i <= first; i++)
	{
		printf("%d ", stack_arr[i]);
	}
	printf("\n");
}
void pop(){
	if(first == -1){
		printf("\nSTACK UNDERFLOW...\n");
		return;
	}
	printf("\nPOPPED ELEMENT: %d\n", stack_arr[0]);
	for (int i = 0; i < first; i++)
	{
		stack_arr[i] = stack_arr[i+1];
	}
	first--;
}
int main(){
	int choice, val;
	while(1){
		printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter value to push: ");
				scanf("%d", &val);
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice! Please try again.\n");
		}
	}
	return 0;
}