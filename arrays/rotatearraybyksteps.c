#include <stdio.h>

void rotateArray(int arr[], int size, int k) {
    k = k % size; // Handle cases where k is greater than size
    int temp[size];

    // Copy last k elements to the beginning of temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    // Shift the rest of the array elements to the right in temp
    for (int i = 0; i < size - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy the rotated array back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Number of steps to rotate

    rotateArray(arr, size, k);

    printf("Array after rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
