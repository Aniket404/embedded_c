#include <stdio.h>

// Function to merge two sorted arrays using pointers
void mergeSortedArrays(int *arr1, int size1, int *arr2, int size2, int *merged) {
    int *p1 = arr1;
    int *p2 = arr2;
    int *p3 = merged;

    while (p1 < arr1 + size1 && p2 < arr2 + size2) {
        if (*p1 <= *p2) {
            *p3 = *p1;
            p1++;
        } else {
            *p3 = *p2;
            p2++;
        }
        p3++;
    }

    // Copy remaining elements from arr1
    while (p1 < arr1 + size1) {
        *p3 = *p1;
        p1++;
        p3++;
    }

    // Copy remaining elements from arr2
    while (p2 < arr2 + size2) {
        *p3 = *p2;
        p2++;
        p3++;
    }
}

// Function to print an array
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1 + size2];

    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    printf("Merged array: ");
    printArray(merged, size1 + size2);

    return 0;
}
