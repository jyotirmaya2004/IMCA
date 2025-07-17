#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stack[100],top=-1;
int a,b;
void push(int val)
{
	stack[++top]=val;
}
int pop()
{
	return stack[top--];
}
void sum(){
	a=pop();
	b=pop();
	push(a+b);
}
void sub(){
	a=pop();
	b=pop();
	push(a-b);
}
void mult(){
	a=pop();
	b=pop();
	push(a*b);
}
void division(){
	a=pop();
	b=pop();
	push(a/b);
}
void power(){
	a=pop();
	b=pop();
	int res=1;
	for (int i = 0; i < b; i++)
	{
		res=res*a;
	}

	push(res);
}

int main()
{
	char st[30];
	int i;
	printf("Enter the prefix operation : ");
	scanf("%[^\n]s",st);
	int n=strlen(st);
	for(i=n-1;i>=0;i--)
	{
		if(st[i]!=' ')
		{
			switch (st[i])
			{
			case '+':
				sum();
				break;
			case '-':
				sub();
				break;
			case '*':
				mult();
				break;
			case '/':
				division();
				break;
			case '^':
				power();
				break;
			default:
				stack[++top]=st[i]-48;
				break;
			}
		}
	}
	printf("The result of the expression = %d",stack[top]);
}