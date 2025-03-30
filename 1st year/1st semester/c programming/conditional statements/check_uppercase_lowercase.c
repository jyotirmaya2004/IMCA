#include<stdio.h>
int main()
{
    char c;
    printf("enter any character: ");
    scanf("%c",&c);
    if(c>='A'&& c<='z')
     printf("upper case \n");
    else if(c>='a'&& c<='z'){
     printf("lower case \n");}
    else{
     printf("not english letter /n");
    }

}