#include<stdio.h>
#include<stdlib.h>
int stack[100],top=-1;
void sum(){
	int op1,op2;
	op1=stack[top--];
	op2=stack[top--];
	stack[++top]=op2+op1;
}
void sub(){
	int op1,op2;
	op1=stack[top--];
	op2=stack[top--];
	stack[++top]=op2-op1;
}
void mult(){
	int op1,op2;
	op1=stack[top--];
	op2=stack[top--];
	stack[++top]=op2*op1;
}
void division(){
	int op1,op2;
	op1=stack[top--];
	op2=stack[top--];
	stack[++top]=op2/op1;
}
void power(){
	int op1,op2,res=1;
	op1=stack[top--];
	op2=stack[top--];
	for (int i = 0; i < op1; i++)
	{
		res=res*op2;
	}

	stack[++top]=res;
}

int main()
{
	char st[30];
	int i;
	printf("Enter the postfix operation : ");
	scanf("%[^\n]s",st);
	for(i=0;st[i]!='\0';i++)
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