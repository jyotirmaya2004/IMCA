#include <stdio.h>
#include <ctype.h>
#define MAX 100
int stack[MAX];
int top = -1;
int eval(char *exp)
{
    for (int i = 0; exp[i]; i++)
    {
        char c = exp[i];
        if (isdigit(c))
            stack[++top] = c - '0';
        else
        {
            int b = stack[top--], a = stack[top--];
            switch (c)
            {
            case '+':
                stack[++top] = a + b;
                break;
            case '-':
                stack[++top] = a - b;
                break;
            case '*':
                stack[++top] = a * b;
                break;
            case '/':
                stack[++top] = a / b;
                break;
            }
        }
    }
    return stack[top];
}
int main()
{
    char exp[] = "23*54*+9-";
    printf("Result = %d\n", eval(exp));
    return 0;
}