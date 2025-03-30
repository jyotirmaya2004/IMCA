/*a c-programming to input any character at runtime and check its an alphabet or number or special character.
If it is an alphabet then check wheather it is vowel or consonant and in lower case or upper case */


#include<stdio.h>
int main()
{
    char c;
    printf("Enter any one character :");
    scanf("%c",&c);
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    {
        printf("%c is a alphabet\n",c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            printf("%c is a vowel\n",c);
            if(c>='a'&&c<='z')
                printf("%c is a lower case\n",c);
            else
                printf("%c is a upper case\n",c);

        }
        else{ 
            printf("%c is a consonant\n",c);
            if(c>='a'&&c<='z')
                printf("%c is a lower case\n",c);
            else
                printf("%c is a upper case\n",c);

        }
    
    }
    else if(c>='0'&&c<='9')
        printf("%c is anumber\n",c);
    else
        printf("%c is a special character\n",c);
    return 0;
}