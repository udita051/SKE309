#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 4, 5};
    int n = 4, pos = 2, val = 3;

    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
