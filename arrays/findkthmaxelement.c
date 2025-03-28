#include <stdio.h>
#include <stdlib.h>

// Comparator function for sorting in ascending order
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findKthMaxMin(int arr[], int size, int k) {
    qsort(arr, size, sizeof(int), compare);  // Sort the array
    
    // Kth smallest element is at index k-1 in sorted array
    // Kth largest element is at index size-k in sorted array
    printf("Kth smallest element: %d\n", arr[k-1]);
    printf("Kth largest element: %d\n", arr[size-k]);
    
    return arr[k-1];  // Return the Kth smallest as an example output
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Kth element to find
    
    int result = findKthMaxMin(arr, size, k);
    printf("Kth smallest element: %d\n", result);
    
    return 0;
}
