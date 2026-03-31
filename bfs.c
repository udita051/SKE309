#include <stdio.h>
#define V 4

void BFS(int graph[V][V], int start) {
    int visited[V] = {0}, queue[V], front = 0, rear = 0;
    visited[start] = 1; queue[rear++] = start;

    while (front < rear) {
        int vertex = queue[front++];
        printf("%d ", vertex);
        for (int i = 0; i < V; i++) {
            if (graph[vertex][i] == 1 && !visited[i]) {
                visited[i] = 1; queue[rear++] = i;
            }
        }
    }
}

int main() {
    int graph[V][V] = {{0,1,1,0}, {1,0,0,1}, {1,0,0,1}, {0,1,1,0}};
    printf("BFS Path: ");
    BFS(graph, 0);
    printf("\n");
    return 0;
}
