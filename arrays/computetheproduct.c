#include <stdio.h>

// Function to compute product of array except self
void productExceptSelf(int arr[], int n, int result[]) {
    int temp = 1;

    // Compute left products and store in result[]
    for (int i = 0; i < n; i++) {
        result[i] = temp;
        temp *= arr[i];
    }

    temp = 1; // Reset temp for right products

    // Compute right products and multiply with result[]
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= temp;
        temp *= arr[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n]; // Output array

    productExceptSelf(arr, n, result);

    printf("Output: ");
    printArray(result, n);

    return 0;
}
