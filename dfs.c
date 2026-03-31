#include <stdio.h>
#define V 4

void DFS(int graph[V][V], int vertex, int visited[V]) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    for (int i = 0; i < V; i++) {
        if (graph[vertex][i] == 1 && !visited[i])
            DFS(graph, i, visited);
    }
}

int main() {
    int graph[V][V] = {{0,1,1,0}, {1,0,0,1}, {1,0,0,1}, {0,1,1,0}};
    int visited[V] = {0};
    printf("DFS Path: ");
    DFS(graph, 0, visited);
    printf("\n");
    return 0;
}
