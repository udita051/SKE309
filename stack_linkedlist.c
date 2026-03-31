#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };
struct Node* top = NULL;

void push(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

int main() {
    push(10);
    push(20);
    printf("Linked List Stack Top: %d\n", top->data);
    return 0;
}
