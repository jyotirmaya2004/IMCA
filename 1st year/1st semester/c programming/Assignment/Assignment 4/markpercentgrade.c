/*A c-programming to input marks of 5 subjets i.e. Physics,Chemistry,Biology,Mathematics,Computer.Calculate the percentage and grade as per the following 
the following criteria
          >=90 grade A
    <=90&&>=80 grade B
    <=80&&>=70 grade C
    <=70&&>=60 grade D
    <=60&&>=40 grade E
          <=40 grade F
*/ 
#include<stdio.h>
int main()
{
    int a,b,c,d,e,t;//t is total mark
    float p,s; //p is percentage of mark
    printf("enter your mark \nPhysics: "); scanf("%d",&a);
    printf("Chemistry: "); scanf("%d",&b);
    printf("Biology: "); scanf("%d",&c);
    printf("Mathematics: "); scanf("%d",&d);
    printf("Computer: "); scanf("%d",&e);
    t=a+b+c+d+e;
    s=t;
    p=s/5;
    printf("your total mark=%d \nyour mark percentage=%.2f\n",t,p);
    if(p>=90.00&&p<=100)
        printf("your grade= A");
    else if(p>=80.00&&p<=100)
        printf("your grade= B");
    else if(p>=70.00&&p<=100)
        printf("your grade= C");
    else if(p>=60.00&&p<=100)
        printf("your grade= D");
    else if(p>=40.00&&p<=100)
        printf("your grade= E");
    else
        printf("you grade F");
    return 0;
    
}