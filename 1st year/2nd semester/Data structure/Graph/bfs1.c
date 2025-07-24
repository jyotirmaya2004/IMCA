#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int graph[SIZE][SIZE], visited[SIZE], total;

// Queue for BFS
int queue[SIZE];
int front = 0, rear = -1;

void enqueue(int v) {
    queue[++rear] = v;
}

int dequeue() {
    return queue[front++];
}

int isQueueEmpty() {
    return front > rear;
}

void BFS(int start) {
    int i, current;

    // Mark start as visited and enqueue
    visited[start] = 1;
    enqueue(start);

    printf("BFS Traversal: ");

    while (!isQueueEmpty()) {
        current = dequeue();
        printf("%d ", current);

        for (i = 0; i < total; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

int main() {
    int i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &total);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < total; i++) {
        for (j = 0; j < total; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Initialize visited array
    for (i = 0; i < total; i++) {
        visited[i] = 0;
    }

    // Start BFS from vertex 0 (you can change it)
    BFS(0);

    return 0;
}
