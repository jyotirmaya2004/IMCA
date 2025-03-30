#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[100][100];

    printf("Enter the number of product : ");
    scanf("%d", &n);
    float b[n];

    for (int i = 0; i < n; i++) {
        printf("Enter product number %d: ", i + 1);
        scanf("%s", a[i]);
    }
    printf("Now Enter product price :\n");
    for (int i = 0; i < n; i++) {
        printf("Price of %s : ", a[i]);
        scanf("%f",&b[i]);
    }                
    printf("\t\t* * * LIST OF ITEMS * * *\n");
    printf("\t\t ITEM\t\t   PRICE\n");
    for (int i = 0; i < n; i++) {
        if(strlen(a[i])>4)
            printf("\t\t%d.%s \tRs. %.2f\n",i+1,a[i],b[i]);
        else
            printf("\t\t%d.%s \t\tRs. %.2f\n",i+1,a[i],b[i]);
    }


    return 0;
}