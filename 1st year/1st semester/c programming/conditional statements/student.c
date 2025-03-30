#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,t;
    float p,s;
    printf("enter in mark \nOdia: "); scanf("%d",&a);
    printf("English: "); scanf("%d",&b);
    printf("Physics: "); scanf("%d",&c);
    printf("Chemistry: "); scanf("%d",&d);
    printf("Mathematics: "); scanf("%d",&e);
    printf("Biology: "); scanf("%d",&f);
    t=a+b+c+d+e+f;
    s=t;
    p=s/6;
    printf("your total mark=%d \nyour mark percentage=%.2f\n",t,p);
    if(p>=90.00&&p<=100)
        printf("your grade= A1");
    else if(p>=80.00&&p<=100)
        printf("your grade= A2");
    else if(p>=70.00&&p<=100)
        printf("your grade= B1");
    else if(p>=60.00&&p<=100)
        printf("your grade= B2");
    else if(p>=50.00&&p<=100)
        printf("your grade= C1");
    else if(p>=40.00&&p<=100)
        printf("your grade= C2");
    else if(p>=30.00&&p<=100)
        printf("your grade= D1");
    else
        printf("you are fail");
    return 0;
    
}