#include<stdio.h>
struct student
    {
        int roll;
        char name[50];
        float mark;
    };

void display_name(struct student);
int main(){
    struct student e;
    printf("Enter a student record : ");
    scanf("%d%s%f",&e.roll,e.name,&e.mark);
    printf("Display student record ");
    printf("\n%d %s %f",e.roll,e.name,e.mark);
    display_name(e);
}
void display_name(struct student s)
{
    printf("\nThe name of the student %s",s.name);
}