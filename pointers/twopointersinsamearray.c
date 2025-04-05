#include <stdio.h>
#include <stdbool.h>

// Function to check if two pointers belong to the same array
bool arePointersInSameArray(int *base, int *ptr1, int *ptr2, int arraySize) {
    // Check if both pointers lie within the bounds of base array
    if ((ptr1 >= base && ptr1 < base + arraySize) &&
        (ptr2 >= base && ptr2 < base + arraySize)) {
        return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4}; // Example array
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[2];

    if (arePointersInSameArray(arr, ptr1, ptr2, sizeof(arr) / sizeof(arr[0]))) {
        printf("True: Both pointers are in the same array.\n");
    } else {
        printf("False: Pointers do not belong to the same array.\n");
    }

    return 0;
}
