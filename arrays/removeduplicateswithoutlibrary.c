#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    int n = *size;
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1; // If duplicate found
                break;
            }
        }
        if (!duplicate) {
            arr[newSize] = arr[i]; // Add unique element
            newSize++;
        }
    }
    *size = newSize; // Update the size after removal
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, &size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}