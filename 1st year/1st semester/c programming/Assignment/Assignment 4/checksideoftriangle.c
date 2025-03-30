/*a c-programming to input the length of 3 sides of a triangle at runtime.check it is a valid triangle or not*/
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three side of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c)
        printf("The triangle is valid\n");
    else    
        printf("The triangle is not valid\n");
    return 0;
}
