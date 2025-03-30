#include <stdio.h>
#include <string.h>

int main()
{
    int n=0;
    char a[100][100];

    float b[100];
    char k;
    

    for (int i = 0; i < 100; i++)
    {
        if(k=='n')
            break;
        else
        {printf("Enter product number %d: ", i + 1);
        scanf("%s", a[i]);
        printf("Price of %s : ", a[i]);
        scanf("%f", &b[i]);
        n++;
        fflush(stdin);
        printf("Do you want to add another product (y/n) : ");
        scanf("%c",&k);



        }
    }
    
    printf("\t\t* * * LIST OF ITEMS * * *\n");
    printf("\t\t ITEM\t\t   PRICE\n");
    for (int i = 0; i < n; i++)
    {
        if (strlen(a[i]) > 4)
            printf("\t\t%d.%s \tRs. %.2f\n", i + 1, a[i], b[i]);
        else
            printf("\t\t%d.%s \t\tRs. %.2f\n", i + 1, a[i], b[i]);
    }

    return 0;
}