#include <stdio.h>
#include <stdbool.h>

bool hasZeroSumSubarray(int arr[], int size) {
    int sum = 0;
    bool hashSet[size * (size + 1) / 2]; // Set to track sums

    // Initialize the hashSet with false values
    for (int i = 0; i < size * (size + 1) / 2; i++) {
        hashSet[i] = false;
    }
    
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add current element to sum
        
        // Check if the sum is 0 or if sum has been seen before
        if (sum == 0 || hashSet[sum]) {
            return true; // Found a subarray with sum 0
        }
        
        // Mark this sum as seen in the hashSet
        hashSet[sum] = true;
    }
    
    return false; // No subarray with zero sum
}

int main() {
    int arr[] = {4, 2, -3, 1, 6}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if (hasZeroSumSubarray(arr, size)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
