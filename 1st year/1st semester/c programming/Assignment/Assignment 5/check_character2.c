#include<stdio.h>
int main()
{
    char c;
    printf("Emter any character : ");
    scanf("%c",&c);
    switch(c)
    {
        case '0' ...'9':
         printf("%c is a number",c);
         break;
        case 'a'...'z' :
         printf("%c is a lower case alphabet",c);
         break;
        case 'A'...'Z' :
         printf("%c is a upper case alphabet",c);
         break;
        default :
         printf("%c is a special character",c);
        return 0;
    }

}