#include<stdio.h>
int main()
{
    char c;
    printf("Emter any alphabet: ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        printf("%c is a vowel ",c); 
         break;
        default :
        {
           if(c>'a'&&c<='z'||c>'A'&&c<='Z')
            printf("%c is a consonant",c);
           else
            printf("%c is not a alphabet",c);
        return 0;
    }
    }
}