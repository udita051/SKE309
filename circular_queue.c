#include <stdio.h>
#define MAX 3

int cqueue[MAX], front = -1, rear = -1;

void enqueueCQ(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("CQ Overflow\n"); return;
    }
    if (front == -1) front = rear = 0;
    else rear = (rear + 1) % MAX;
    cqueue[rear] = val;
}

int main() {
    enqueueCQ(10); enqueueCQ(20); enqueueCQ(30);
    printf("Circular Queue Rear element: %d\n", cqueue[rear]);
    return 0;
}
