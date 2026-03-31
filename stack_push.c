#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1) printf("Overflow\n");
    else stack[++top] = val;
}

int main() {
    push(5);
    push(15);
    printf("Pushed items. Top is now %d\n", stack[top]);
    return 0;
}
