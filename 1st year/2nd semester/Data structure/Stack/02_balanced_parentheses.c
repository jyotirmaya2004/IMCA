#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
int isMatching(char a, char b)
{
    return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']');
}
int isBalanced(char *expr)
{
    for (int i = 0; expr[i]; i++)
    {
        char c = expr[i];
        if (c == '(' || c == '{' || c == '[')
            stack[++top] = c;
        else if (c == ')' || c == '}' || c == ']')
        {
            if (top == -1 || !isMatching(stack[top--], c))
                return 0;
        }
    }
    return top == -1;
}
int main()
{
    char expr[] = "{[()]}";
    printf(isBalanced(expr) ? "Balanced\n" : "Not Balanced\n");
    return 0;
}