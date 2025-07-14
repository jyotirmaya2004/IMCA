#include<stdio.h>
#include<stdlib.h>
typedef struct polynomial
{
	int coef;
	int exp;
	struct polynomial *next;
}poly;
poly CreateList(poly*);
poly AddPoly(poly*,poly*);
void extra(poly*,poly*);
void display(poly*);
main()
{
	poly *L1,*L2,*L3;
	char ch='1';
		while(ch>='1'&&ch<='3')
		{
			printf("\n1.Create");
			printf("\n2.Addition");
			printf("\n3.Quite");
			printf("\nEntrer a choice");
			fflush(stdin);
			ch=getchar();
			switch (ch)
			{
			case '1':
				L1=L2=NULL;
				printf("\nCreate the first list of polynomial- ");
				L1=CreateList(L1);
				printf("\nCreate the secomd list of polynomial- ");
				L2=CreateList(L2);
				printf("\nDisplay the first polynomial :");
				display(L1);
				printf("\nDisplay the Second polynomial :");
				display(L2);
				break;
			case '2':
				L3=NULL;
				L3=AddPoly(L1,L2);
				display(L1);
				display(L2);
				display(L3);

				break;
			case '3':
				exit(0);
				break;

			default:
				printf("wrong choice");
				break;
			}
		}
}
poly CreateList(poly *f)
{
	poly *curr,*prev;
	char ch='Y';
	while(ch=='y'||ch=='Y')
	{
		curr=(poly*)malloc(sizeof(poly));
		if(curr==NULL)
		{
			printf("Failed");
			exit(0);
		}
		curr->next=NULL;
		printf("\nEnter the coefficient : ");
		scanf("%d",&curr->coef);
		printf("\nEnter the exponet : ");
		scanf("%d",&curr->exp);
		if(f==NULL)
		{
			f=curr;
		}
		else
		 prev->next=curr;
		prev=curr;
		printf("\nDo you want to continue : ");
		fflush(stdin);
		scanf("%c",&ch);


	}
	return f;
}
poly AddPoly(poly *L1,poly *L2)
{
	poly *curr,*prev,*p1,*p2,*p3=NULL;
	p1=L1;
	p2=L2;
	while (p1!=NULL&&p2!=NULL)
	{
		if(p1->coef+p2->coef==0)
		{
			p1=p1->next;
			p2=p2->next;
			continue;
		}

	}
	curr=(poly*)malloc(sizeof(poly));
		if(curr==NULL)
		{
			printf("Failed");
			exit(0);
		}
	curr->next=NULL;
	if(p3==NULL)
		{
			p3=curr;
			prev=curr;
		}
		else{
			prev->next=curr;
			prev=curr;
		}
		if(p1->exp==p2->exp)
		{
			curr->coef=p1->coef+p2->coef;
			curr->exp=p1->exp;
			p1=p1->next;
			p2=p2->next;
		}
		else if (p1->exp<p2->exp)
		{
			curr->coef=p2->coef;
			curr->exp=p2->exp;
			p2=p2->next;

		}
		else if (p1->exp>p2->exp)
		{
			curr->coef=p1->coef;
			curr->exp=p1->exp;
			p1=p1->next;

		}
		if(p1==NULL)
		extra(prev, p2);
		if(p1==NULL)
		extra(prev, p1);
		return *p3;

}
void extra(poly*prev,poly*p)
{

}