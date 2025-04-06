#include <stdio.h>

// Function to reverse array between two pointers
void reverse(int *start, int *end) {
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by k using pointer arithmetic
void rotateRight(int *arr, int n, int k) {
    k = k % n;  // Handle k > n

    // Step 1: Reverse the whole array
    reverse(arr, arr + n - 1);

    // Step 2: Reverse the first k elements
    reverse(arr, arr + k - 1);

    // Step 3: Reverse the rest
    reverse(arr + k, arr + n - 1);
}

// Function to print the array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 14;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    rotateRight(arr, n, k);

    printf("Rotated array:  ");
    printArray(arr, n);

    return 0;
}
