#include<stdio.h>
#include<stdlib.h>
#define MAX 100
char tree[MAX];
void bulid_tree(int i,char ch)
{
	char opt,l_child,r_child;
	if(i!=-1&&i<MAX)
	{
		tree[i]=ch;
		printf("\n%c has left child(y/n) ? : ",ch);
		scanf("%c",&opt);
		if(opt=='Y'||opt=='y')
		{
			printf("Enter left child : ");
			getchar();
			scanf("%c",&l_child);
			bulid_tree(2*i+1,l_child);
		}
		printf("\n%c has right child(y/n) ? : ",ch);
		scanf("%c",&opt);
		if(opt=='Y'||opt=='y')
		{
			printf("Enter right child : ");
			getchar();
			scanf("%c",&r_child);
			bulid_tree(2*i+2,r_child);
		}

	}
}
int main()
{
	int j;
	char ch;
	printf("Enter root node : ");
	scanf("%c",&ch);
	bulid_tree(0,ch);
	printf("The tree : \n");
	for(j=0;j<MAX;j++)
	{
		if(tree[j]!='\0')
		{
			printf("\n%d = %c ",j,tree[j]);
		}
	}
}