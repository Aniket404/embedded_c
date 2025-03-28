#include <stdio.h>

void findRepeatingElements(int arr[], int size) {
    printf("Repeating elements: ");
    
    // Traverse the array and mark elements as visited
    for (int i = 0; i < size; i++) {
        int absValue = abs(arr[i]);
        
        // If the value at index 'absValue' is negative, it has been visited before, hence it is a duplicate
        if (arr[absValue] < 0) {
            printf("%d ", absValue);
        } else {
            // Mark the element as visited by negating the value at the corresponding index
            arr[absValue] = -arr[absValue];
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findRepeatingElements(arr, size);
    
    return 0;
}
