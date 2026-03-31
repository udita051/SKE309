#include <stdio.h>

void maxHeapify(int arr[], int n, int i) {
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;
    if (largest != i) {
        int temp = arr[i]; arr[i] = arr[largest]; arr[largest] = temp;
        maxHeapify(arr, n, largest);
    }
}

int main() {
    int arr[] = {3, 9, 2, 1, 4, 5}; int n = 6;
    for (int i = n / 2 - 1; i >= 0; i--) maxHeapify(arr, n, i);
    printf("Max Heap: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
