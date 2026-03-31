#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *left, *right; };

struct Node* findMin(struct Node* root) {
    while (root && root->left != NULL) root = root->left;
    return root;
}

struct Node* deleteNode(struct Node* root, int key) {
    if (!root) return root;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (!root->left) return root->right;
        else if (!root->right) return root->left;
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->data = 10; root->left = root->right = NULL;
    root = deleteNode(root, 10);
    if (root == NULL) printf("Node deleted. Tree is empty.\n");
    return 0;
}
