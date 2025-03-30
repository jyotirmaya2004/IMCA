// C program to check whether a year is leap year or not
// using ternary operator

#include <stdio.h>

int main()
{
    int yr;
    printf("enter a year:");
    scanf("%d",&yr);

    yr%4==0?printf("This year is a leap year"):printf("This year is not a leap year");
    return 0;
}
//required correction