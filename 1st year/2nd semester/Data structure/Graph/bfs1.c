#include<stdio.h>
#include<stdlib.H>

void BFS(int);
int graph[10][10],visited[10],total;
void main()
{
	int i,j;
	printf("\nEnter the total number of vertices : ");
	scanf("%d", &total);

	printf("Enter the adjacency matrix : ");
	for ( i = 0; i < total; i++)
	{
		for(j=0;j<total;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	for ( i = 0; i < total; i++)
	{
		visited[i]=0;
	}
	BFS(0);

}
void BFS(int vertes)
{
	int j;
	printf("%d\t",vertes);
	visited[vertes]=1;
	for(j=0;j<total;j++)
	{
		if(!visited[j]&&graph[vertes][j]==1)
		{
			BFS(j);
		}
	}
}