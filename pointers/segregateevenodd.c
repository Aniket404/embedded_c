#include <stdio.h>

// Function to segregate even and odd values using pointers
void segregateEvenOdd(int *arr, int n) {
    int *left = arr;
    int *right = arr + n - 1;

    while (left < right) {
        // Move left forward if even
        if (*left % 2 == 0) {
            left++;
        }
        // Move right backward if odd
        else if (*right % 2 != 0) {
            right--;
        }
        // Swap when left is odd and right is even
        else {
            int temp = *left;
            *left = *right;
            *right = temp;
            left++;
            right--;
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 34, 9, 8, 45, 90}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    segregateEvenOdd(arr, n);

    printf("Segregated array: ");
    printArray(arr, n);

    return 0;
}
