#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void reverse(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        stack[++top] = str[i];
    for (int i = 0; i < len; i++)
        str[i] = stack[top--];
}
int main()
{
    char str[] = "hello";
    reverse(str);
    printf("Reversed: %s\n", str);
    return 0;
}