#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int expected_sum = ((size + 1) * (size + 2)) / 2; // Sum of first (size+1) natural numbers
    int actual_sum = 0;
    
    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }
    
    return expected_sum - actual_sum; // The missing number
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10}; // Example input with 5 missing
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int missing = findMissingNumber(arr, size);
    printf("Missing number: %d\n", missing);
    
    return 0;
}