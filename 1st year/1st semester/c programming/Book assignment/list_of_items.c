#include<stdio.h>
int main()
{
    float r,s,sa,k;
    printf("Enter following price \n");
    printf("One kg of rice = ");
    scanf("%f",&r);
    printf("One kg of sugar = ");
    scanf("%f",&s);
    printf("One kg of salt = ");
    scanf("%f",&sa);
    printf("One kg of kaju = ");
    scanf("%f",&k);
    printf("\t\t* * * LIST OF ITEMS * * *\n");
    printf("\t\t ITEM\t\t  PRICE\n");
    printf("\t\t1.Rice\t\tRs. %.2f\n",r);
    printf("\t\t2.Sugar\t\tRs. %.2f\n",s);
    printf("\t\t3.Salt\t\tRs. %.2f\n",sa);
    printf("\t\t4.Kaju\t\tRs. %.2f\n",k);
}