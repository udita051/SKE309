#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = val;
    printf("Enqueued: %d\n", val);
}

int main() {
    enqueue(100);
    return 0;
}
