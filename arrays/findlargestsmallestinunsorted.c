#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0]; // Initialize min and max with the first element
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {34, 15, 88, 2}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    
    findMinMax(arr, size, &min, &max);
    printf("Max: %d, Min: %d\n", max, min);
    
    return 0;
}
