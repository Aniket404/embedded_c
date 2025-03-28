#include <stdio.h>

int findDuplicate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int index = abs(arr[i]);
        if (arr[index] < 0) {
            return index; // Duplicate found
        }
        arr[index] = -arr[index];
    }
    return -1; // No duplicate found
}

int main() {
    int arr[] = {3, 1, 3, 4, 2}; // Example input with duplicate 3
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int duplicate = findDuplicate(arr, size);
    if (duplicate != -1)
        printf("Duplicate number: %d\n", duplicate);
    else
        printf("No duplicate found.\n");
    
    return 0;
}
