#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };
struct Node* head = NULL;

void insertBeginning(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val; temp->next = head; head = temp;
}

int main() {
    insertBeginning(20);
    insertBeginning(10);
    printf("List starts with: %d -> %d\n", head->data, head->next->data);
    return 0;
}
