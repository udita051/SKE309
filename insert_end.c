#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };
struct Node* head = NULL;

void insertEnd(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val; temp->next = NULL;
    if (head == NULL) { head = temp; return; }
    struct Node* ptr = head;
    while (ptr->next != NULL) ptr = ptr->next;
    ptr->next = temp;
}

int main() {
    insertEnd(10); insertEnd(20);
    printf("List ends with: %d\n", head->next->data);
    return 0;
}
