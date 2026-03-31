#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *left, *right; };

struct Node* create(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data; newNode->left = newNode->right = NULL;
    return newNode;
}

int main() {
    struct Node* root = create(1);
    root->left = create(2);
    root->right = create(3);
    printf("Tree created. Root: %d, Left: %d, Right: %d\n",
           root->data, root->left->data, root->right->data);
    return 0;
}
