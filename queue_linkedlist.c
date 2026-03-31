#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };
struct Node *front = NULL, *rear = NULL;

void enqueue(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val; temp->next = NULL;
    if (rear == NULL) { front = rear = temp; return; }
    rear->next = temp; rear = temp;
}

int main() {
    enqueue(50); enqueue(60);
    printf("Linked List Queue Front: %d, Rear: %d\n", front->data, rear->data);
    return 0;
}
