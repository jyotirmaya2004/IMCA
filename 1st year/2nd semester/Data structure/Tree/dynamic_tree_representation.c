#include<stdio.h>
#include<stdlib.h>
typedef struct dynamic_tree_representation
{
	char data;
	struct dynamic_tree_representation *l,*r;
}D_tree;
D_tree* get_node()
{
	D_tree *node=(D_tree*)malloc(sizeof(D_tree));
	if(node==NULL)
	{
		printf("\nMemroy allocation failed!!!");
		exit(1);
	}
	return node;
}
void build_tree(D_tree* root,char ch)
{
	char opt,l_child,r_child;
	if(root!=NULL)
	{
		root->l=NULL;
		root->data=ch;
		root->r=NULL;
		printf("\n%c has left child(y/n) : ",root->data);
		getchar();
		scanf("%c",&opt);
		if(opt=='Y'||opt=='y')
		{
			root->l=get_node();
			printf("Enter left child : ");
			getchar();
			scanf("%c",&l_child);
			bulid_tree(root->l,l_child);
		}
		printf("\n%c has right child(y/n) : ",root->data);
		getchar();
		scanf("%c",&opt);
		if(opt=='Y'||opt=='y')
		{
			root->r=get_node();
			printf("Enter right child : ");
			getchar();
			scanf("%c",&r_child);
			bulid_tree(root->r,r_child);
		}

	}
}
void pretraversal(D_tree* root)
{
	if(root!=NULL)
	{
		printf("%c ",root->data);
		pretraversal(root->l);
		pretraversal(root->r);

	}
}
void intraversal(D_tree* root)
{
	if(root!=NULL)
	{
		intraversal(root->l);
		printf("%c ",root->data);
		intraversal(root->r);

	}
}
void posttraversal(D_tree* root)
{
	if(root!=NULL)
	{
		posttraversal(root->l);
		posttraversal(root->r);
		printf("%c ",root->data);

	}
}
int main()
{
	char ch;
	D_tree *root=get_node();
}
