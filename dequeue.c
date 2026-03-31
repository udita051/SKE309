#include <stdio.h>

int queue[5] = {10, 20, 30}, front = 0, rear = 2;

void dequeue() {
    if (front == -1 || front > rear) printf("Underflow\n");
    else printf("Dequeued: %d\n", queue[front++]);
}

int main() {
    dequeue();
    return 0;
}
