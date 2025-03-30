#include<stdio.h>
void decrase(int n)
{
   if(n==0) return;
   printf("%d\n",n);
   decrase(n-1);
   return; 
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    decrase(n);
    return 0;
}