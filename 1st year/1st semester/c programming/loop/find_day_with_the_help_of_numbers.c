#include<stdio.h>
int main()
{
    int n;
    printf("enter any number(1-7)= ");
    scanf("%d",&n);

    switch(n){
     case 1: printf ("monday\n");
               break;
     case 2: printf ("Tuesday\n");
               break;
     case 3: printf ("Wednesday\n");
               break;
     case 4: printf ("thursday\n");
               break;
     case 5: printf ("Friday\n");
               break;
     case 6: printf ("Saturday\n");
               break;
     case 7: printf ("Sunday\n");
               break;
     default : printf ("Monday\n");
               
 
        }     

}