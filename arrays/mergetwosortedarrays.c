#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    
    // Merge the two sorted arrays
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    
    // Copy any remaining elements from arr1
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    
    // Copy any remaining elements from arr2
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5}; // First sorted array
    int arr2[] = {2, 4, 6}; // Second sorted array
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int result[size1 + size2]; // Resultant array to store merged result
    
    mergeSortedArrays(arr1, size1, arr2, size2, result);
    
    // Print the merged sorted array
    printf("Merged sorted array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}
