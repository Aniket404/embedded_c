#include <stdio.h>

// Function to rearrange the array in-place
void rearrangeArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] += (arr[arr[i]] % n) * n;
    }

    for (int i = 0; i < n; i++) {
        arr[i] /= n;
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
    int arr[] = {0,1,2,3}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    rearrangeArray(arr, n);

    printf("Rearranged Array: ");
    printArray(arr, n);

    return 0;
}
