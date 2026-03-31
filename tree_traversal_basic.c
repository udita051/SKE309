#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *left, *right; };

struct Node* create(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data; n->left = n->right = NULL; return n;
}

void traverse(struct Node* root) {
    if (root) { printf("%d ", root->data); traverse(root->left); traverse(root->right); }
}

int main() {
    struct Node* root = create(1);
    root->left = create(2);
    root->right = create(3);
    printf("Basic Preorder Traversal: "); traverse(root); printf("\n");
    return 0;
}
