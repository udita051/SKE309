#include <stdio.h>

int stack[5] = {10, 20, 30}, top = 2;

void pop() {
    if (top == -1) printf("Underflow\n");
    else printf("Popped: %d\n", stack[top--]);
}

int main() {
    pop();
    return 0;
}
