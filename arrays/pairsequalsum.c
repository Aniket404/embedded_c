#include <stdio.h>

void findPairsWithSum(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d, %d] ", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 3, 5, 6, -2, 4, 7, 8, 9}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7; // Target sum
    
    findPairsWithSum(arr, size, target);
    printf("\n");
    
    return 0;
}
