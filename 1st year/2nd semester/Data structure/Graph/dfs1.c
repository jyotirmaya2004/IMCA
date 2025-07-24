#include <stdio.h>
#define MAX 10

int graph[MAX][MAX];    // Adjacency matrix
int visited[MAX];       // Visited array
int n;                  // Number of vertices

// DFS function
void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);   // Visit the current node

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            DFS(i);     // Recurse for unvisited adjacent vertices
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Initialize all nodes as unvisited
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("DFS traversal starting from vertex %d:\n", start);
    DFS(start);

    return 0;
}
