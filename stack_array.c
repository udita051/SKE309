#include <stdio.h>
#define MAX 10

int stack[MAX], top = -1;

int main() {
    stack[++top] = 10;
    stack[++top] = 20;
    printf("Implemented Stack. Top element: %d\n", stack[top]);
    return 0;
}
