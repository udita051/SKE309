#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30, n = 5, found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    if (found != -1) printf("Element found at index %d\n", found);
    else printf("Element not found\n");
    return 0;
}
