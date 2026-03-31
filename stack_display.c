#include <stdio.h>

int stack[5] = {10, 20, 30}, top = 2;

void display() {
    if (top == -1) printf("Stack is empty\n");
    else {
        printf("Stack: ");
        for (int i = top; i >= 0; i--) printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    display();
    return 0;
}
