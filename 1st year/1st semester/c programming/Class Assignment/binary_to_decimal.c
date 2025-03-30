#include<stdio.h>
int main()
{
    int binary;
    int decimal=0,base=1,rem;
    printf("Enter a binay number : ");
    scanf("%d",&binary);
    while(binary>0){
        rem= binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
        
    }
    printf("%d",decimal);
}
