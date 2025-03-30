#include<stdio.h>
int main()
{
    int dn,pin;
    char name[20],name2[20],street[20],city[20];
    printf("Enter your first name : ");
    scanf("%s",&name);
    fflush(stdin);
    printf("Enter your last name : ");
    scanf("%s",&name2);
    fflush(stdin);
    printf("Enter your door/house no : ");
    scanf("%d",&dn);
    fflush(stdin);
    printf("Enter your street name : ");
    scanf("%c",&street);
    fflush(stdin);
    printf("Enter your city name : ");
    scanf("%s",&city);
    fflush(stdin);
    printf("Enter your pincode : ");
    scanf("%s",&pin);
    printf("            YOUR MAILING ADDRESS\n");
    printf("Name            : %s %s\n",name,name2);
    printf("Door no,street  : %d %s\n",dn,street);
    printf("city,pin code   : %s %d\n\n\n",city,pin);
}