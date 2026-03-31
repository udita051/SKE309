#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1; head->next = NULL;
    printf("Singly Linked List created with head data: %d\n", head->data);
    return 0;
}
