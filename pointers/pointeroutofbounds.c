#include <stdio.h>
#include <stdbool.h>

// Function to check if a pointer is out of bounds
bool isOutOfBounds(int *array, int size, int *ptr) {
    return (ptr < array || ptr >= array + size);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *ptr1 = &arr[2];     // Valid
    int *ptr2 = &arr[5];     // Out of bounds (points to past-the-end)
    int *ptr3 = &arr[-1];    // Out of bounds (before start)

    printf("ptr1 is %s\n", isOutOfBounds(arr, size, ptr1) ? "Out of bounds" : "Within bounds");
    printf("ptr2 is %s\n", isOutOfBounds(arr, size, ptr2) ? "Out of bounds" : "Within bounds");
    printf("ptr3 is %s\n", isOutOfBounds(arr, size, ptr3) ? "Out of bounds" : "Within bounds");

    return 0;
}
