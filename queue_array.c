#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

int main() {
    front = 0; rear = 0; queue[rear] = 10;
    printf("Queue initialized with element: %d\n", queue[front]);
    return 0;
}
