#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char stack[100];
int top=-1,size;\
int isOperator(char item)
{
	if(item=='+'||item=='-'||item=='*'||item=='^'||item=='/')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(char item)
{
	if(top>=size-1)
	{
		printf("\nStack overflow\n");
	}
	else{
		top++;
		stack[top]=item;
	}
}
int pop()
{
	if(top<0)
	{
		printf("\nStack is empty");
		exit(1);
	}
	else{
		char val=stack[top];
		top--;
		return val;
	}
}
int precedence(char symbol)
{
	if(symbol=='^')
	{
		return 3;
	}
	else if(symbol=='*'||symbol=='/')
	{
		return 2;
	}
	else if(symbol=='+'||symbol=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void infixTopostfix(char infix_exp[],char postfix_exp[])
{
	int i,j;
	char item,x;
	push('(');
	strcat(infix_exp,")");
	i=0,j=0;
	item=infix_exp[i];
	while(item!='\0')
	{
		if(item=='(')
		{
			push(item);
		}
		else if(isdigit(item)||isalpha(item))
		{
			postfix_exp[j++]=item;
		}
		else if(isOperator(item)==1)
		{
			x=pop();
			while((isOperator(item)==1)&&precedence(x)>=precedence(item))
			{
				postfix_exp[j++]=x;
				x=pop();

			}
			push(x);
			push(item);
		}
		else if(item==')')
		{
			x=pop();
			while(x!='(')
			{
				postfix_exp[j++]=x;
				x=pop();
			}
			push('(');
		}
		else
		{
			printf("Invalid Expression\n");
			exit(1);
		}
		i++;
		item=infix_exp[i];
	}
	postfix_exp[j++]='\0';
}
int main()
{
	char infix[100],postfix[100];
	printf("Enter the size of the stack : ");
	scanf("%d",&size);
	printf("Enter the infix operation : ");
	scanf("%s",infix);
	infixTopostfix(infix,postfix);
	printf("Postfix operation : %s",postfix);

}