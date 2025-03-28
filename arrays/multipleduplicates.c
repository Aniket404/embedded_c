#include <stdio.h>
#include <stdlib.h>

void findDuplicates(int arr[], int size) {
    int max = size; // Maximum value in array should be within the array size
    int visited[max]; // Boolean array to track visited elements
    for (int i = 0; i < max; i++) visited[i] = 0; // Initialize visited array to 0

    printf("Duplicate numbers: ");
    for (int i = 0; i < size; i++) {
        if (visited[arr[i]] == 1) {
            printf("%d ", arr[i]); // Found duplicate
        } else {
            visited[arr[i]] = 1; // Mark as visited
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findDuplicates(arr, size);
    
    return 0;
}
