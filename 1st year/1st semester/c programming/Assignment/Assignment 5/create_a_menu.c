#include<stdio.h>
int main()
{
    int n;
    printf("Please choose any option from the following menu\n");
    printf("\t(1).Add two integer \n");
    printf("\t(2).Check a character as alphabet or not\n");
    printf("\t(3).Check a character as digit or not \n");
    printf("\t(4).Exit \n");
    printf("please enter any option from the above menu : ");
    scanf("%d",&n);
    getc(stdin);
    fflush(stdin);
    if(n==1){
         int a,b;
        printf("Enter any two number : ");
        scanf("%d%d",&a,&b);
        printf("SUM : %d + %d = %d",a,b,a+b);
        }
    else if(n==2){
        char c1;
        printf("Check any a character : ");
        scanf("%c",&c1);
        {
        if(c1>'a'&&c1<='z'||c1>'A'&&c1<='Z')
            printf("%c is a alphabet",c1);
        else
            printf("%c is not a alphabet",c1);
        }
    }
    else if(n==3){ 
         char c2;
        printf("Check any a character : ");
        scanf("%c",&c2);{
    
        if(c2>'1'&&c2<='9')
            printf("%c is a digit",c2);
        else
            printf("%c is not a digit",c2);
        }
    }
    else if(n==4)
        printf("Existing ....");
    else
        printf("invalid choice \n Please try again");
    
    return 0;   
    
}
