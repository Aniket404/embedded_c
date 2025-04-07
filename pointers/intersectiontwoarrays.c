#include <stdbool.h>
#define MAX 1000  // Assumes array elements are in range 0–999
#include <stdio.h>

// Function to find intersection of two sorted arrays using pointers
void intersectionSorted(int *arr1, int *arr2, int size1, int size2) {
    int *p1 = arr1;
    int *p2 = arr2;

    printf("Intersection (Sorted): ");
    while (p1 < arr1 + size1 && p2 < arr2 + size2) {
        if (*p1 == *p2) {
            printf("%d ", *p1);
            p1++;
            p2++;
        } else if (*p1 < *p2) {
            p1++;
        } else {
            p2++;
        }
    }
    printf("\n");
}

// Function to find intersection of unsorted arrays using hash table
void intersectionUnsorted(int *arr1, int *arr2, int size1, int size2) {
    bool hash[MAX] = {false};

    // Fill hash table with arr1 values
    for (int *p = arr1; p < arr1 + size1; p++) {
        hash[*p] = true;
    }

    printf("Intersection (Unsorted): ");
    for (int *p = arr2; p < arr2 + size2; p++) {
        if (hash[*p]) {
            printf("%d ", *p);
            hash[*p] = false;  // Avoid duplicate output
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Call both versions
    intersectionSorted(arr1, arr2, size1, size2);
    intersectionUnsorted(arr1, arr2, size1, size2);

    return 0;
}
