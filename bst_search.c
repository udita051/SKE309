#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *left, *right; };

struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) return root;
    if (root->data < key) return search(root->right, key);
    return search(root->left, key);
}

int main() {
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->data = 50; root->left = root->right = NULL;
    if (search(root, 50)) printf("Element 50 found in BST.\n");
    return 0;
}
