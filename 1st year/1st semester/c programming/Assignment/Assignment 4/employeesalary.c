/*A c-programming to input the basic salary of an employee and calculate the gross salary as per the following criteria
gs = bs+hra+da
          <=10000 : hra =20% da=80%
    >10000<=20000 : hra =25% da=90%
           >20000 : hra =30% da=100%
*/
#include<stdio.h>
int main()
{
    float gs,bs,hra,da;
    printf("Enter the basic salary of the employee : ");
    scanf("%f",&bs);
    if(bs<=10000){
        hra=0.2*bs;
        da=0.8*bs;
        gs = bs+hra+da;
        printf("the gross salary is %9.2f",gs);
    }
    else if(bs>10000 && bs<=20000){
        hra = 0.25*bs;
        da = 0.9*bs;
        gs = bs+hra+da;
        printf("the gross salary is %9.2f",gs);
    }
    else if(bs>20000){
        hra=0.3*bs;
        da=bs;
        gs = bs+hra+da;
        printf("the gross salary is %9.2f",gs);
    }
    return 0;
}