#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

char stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

// Function to push an element into stack1
void push_s1(char x) {
    if (top1 == MAX - 1) return;
    stack1[++top1] = x;
}

// Function to pop an element from stack1
char pop_s1() {
    if (top1 == -1) return -1;
    return stack1[top1--];
}

// Function to push an element into stack2
void push_s2(char x) {
    if (top2 == MAX - 1) return;
    stack2[++top2] = x;
}

// Function to pop an element from stack2
char pop_s2() {
    if (top2 == -1) return -1;
    return stack2[top2--];
}

int empty_s1(){ return top1 == -1; }
int isOperand(char c){ return isalnum((unsigned char)c); }

// Function to return precedence of operators
int precedence(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/'||x=='%') return 2;
    if (x == '^') return 3;
    return 0;
}

// Function to reverse a string
void reverse(char *exp) {
    int len = strlen(exp);
    for (int i = 0; i < len / 2; i++) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
}

void InfixToPrefix(char *E, char *prefix)
{
    /* Step 1: add '(' at the beginning of E  */
    char temp[MAX];
    temp[0] = '(';
    strcpy(temp + 1, E);

    /* Step 2: Push(s1, ')') */
    top1 = top2 = -1;
    push_s1(')');

    /* Step 3: Reverse order scan of E (right to left) */
    reverse(temp);            // now we can scan left -> right on the reversed string

    /* Step 4: Repeat Steps 5 to 21 while stack s1 is not empty */
    for (int i = 0; !empty_s1() && temp[i] != '\0'; ++i) {

        char item = temp[i];

        /* Step 5: if item = operand */
        if ( isOperand(item) ){
            /* Step 6 */
            push_s2(item);
            /* Step 7 end-if */
        }
        /* Step 7 (in book): if item = ')' */
        else if ( item == ')' ){
            /* Step 8 */
            push_s1(item);
            /* Step 9 end-if */
        }
        /* Step 9 (book): if item = operator */
        else if ( item=='+' || item=='-' || item=='*' || item=='/' || item=='^') {

            /* Step 10 */
            char x = pop_s1();

            /* Step 11 */
            if ( precedence(x) > precedence(item) ){

                /* Step 12: repeat 13-14 while precedence(x) > precedence(item) */
                while ( precedence(x) > precedence(item) ){
                    /* Step 13 */
                    push_s2(x);
                    /* Step 14 */
                    x = pop_s1();
                }
                /* Step 15 end-while */
            }
            /* Step 16 end-if */

            /* Step 15/16 in text: push(s1, x) and push(s1, item) */
            push_s1(x);
            push_s1(item);

            /* Step 17 end-if */
        }
        /* Step 17 (book): if item = '(' */
        else if ( item == '(' ){
            /* Step 18 */
            char x = pop_s1();
            /* Step 19: repeat 20-21 while x != ')' */
            while ( x != ')' ){
                /* Step 20 */
                push_s2(x);
                /* Step 21 */
                x = pop_s1();
            }
            /* End repeat */
        }
        /* else: ignore any other char */
    }
    /* End Step 4 loop */

    /* Finally: s2 holds the result in reverse. Reverse it to get prefix string */
    int k = 0;
    for (int i = top2; i >= 0; --i) prefix[k++] = stack2[i];
    prefix[k] = '\0';
}

/* -------- driver -------- */
int main(void)
{
    char E[MAX], prefix[MAX];
    printf("Enter infix expression (no spaces): ");
    scanf("%s", E);

    InfixToPrefix(E, prefix);
    printf("Prefix: %s\n", prefix);

    return 0;
}