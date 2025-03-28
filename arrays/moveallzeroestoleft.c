#include <stdio.h>

void moveZerosToLeft(int arr[], int size) {
    int j = size - 1; // Pointer for placing non-zero elements from the end

    // Traverse the array from the end
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] != 0) {
            arr[j--] = arr[i]; // Place non-zero elements at the end
        }
    }

    // Fill the remaining positions with zeros
    for (int i = 0; i <= j; i++) {
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZerosToLeft(arr, size);

    printf("Array after moving zeros to the left: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
