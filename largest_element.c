#include <stdio.h>

int main() {
    int arr[] = {10, 50, 20, 80, 30};
    int n = 5;
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    printf("Largest element is %d\n", max);
    return 0;
}
