#include <stdio.h>
#include <ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
void infixToPostfix(char *exp)
{
    for (int i = 0; exp[i]; i++)
    {
        char c = exp[i];
        if (isalnum(c))
            printf("%c", c);
        else if (c == '(')
            stack[++top] = c;
        else if (c == ')')
        {
            while (stack[top] != '(')
                printf("%c", stack[top--]);
            top--;
        }
        else
        {
            while (top != -1 && precedence(stack[top]) >= precedence(c))
                printf("%c", stack[top--]);
            stack[++top] = c;
        }
    }
    while (top != -1)
        printf("%c", stack[top--]);
}
int main()
{
    char expr[] = "A+B*C";
    infixToPostfix(expr);
    return 0;
}