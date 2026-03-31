#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };
struct Node* head = NULL;

void deleteNode() {
    if (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
    }
}

int main() {
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 100; head->next = NULL;
    deleteNode();
    return 0;
}
