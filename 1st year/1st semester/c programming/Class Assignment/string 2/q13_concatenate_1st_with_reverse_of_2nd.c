#include<stdio.h>
#include<string.h>
void reverseWords(char str[]) {
    int n = strlen(str);
    char temp[200];
    int i, j = 0, k = 0;

    // Reverse the entire sentence
    for (i = n - 1; i >= 0; i--) {
        if (str[i] == ' ' || i == 0) {
            // Add the word to the temp array
            int start = (i == 0) ? i : i + 1;
            while (str[start] != ' ' && str[start] != '\0') {
                temp[j++] = str[start++];
            }
            // Add a space after the word
            if (k < n - 1) temp[j++] = ' ';
        }
    }
    temp[j] = '\0'; // Null-terminate the reversed string

    // Copy the reversed string back to the original
    strcpy(str, temp);
}
int main()
{
    char a[100],b[50],c[50],d[50];
    printf("Enter string 1 : ");
    gets(a);
    printf("Enter string 2 : ");
    gets(b);
    int j=0,l;
    for (int i = 0; i <= strlen(b); i++)
    {
        if(b[i]!=32&&b[i]!='\0')
            c[j++]=b[i];
        else
        {
            c[j]=' ';
            c[j+1]='\0';
            strcat(d,c);
            j=0;
        }
    }
    reverseWords(d);
    strcat(a,d);
    puts(a);

}