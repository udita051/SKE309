#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *left, *right; };

struct Node* insert(struct Node* root, int val) {
    if (!root) {
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = val; n->left = n->right = NULL; return n;
    }
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    printf("BST Root: %d, Left: %d, Right: %d\n",
           root->data, root->left->data, root->right->data);
    return 0;
}
