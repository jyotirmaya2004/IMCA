#include<stdio.h>
int main()
{
    int a;
    char b;
    double c;
    float d;
    printf("size of int : %zu bytes\n",sizeof(a));
    printf("size of float : %zu bytes\n",sizeof(d));
    printf("size of double : %zu bytes\n",sizeof(c));
    printf("size of char : %zu bytes\n",sizeof(b));
    return 0;
}