#include <stdio.h>

// Function to find the minimum subarray sum
int findMinSubarraySum(int arr[], int n) {
    int min_sum = arr[0];  // Stores the minimum sum encountered
    int current_min = arr[0]; // Current minimum subarray sum

    for (int i = 1; i < n; i++) {
        current_min = (arr[i] < current_min + arr[i]) ? arr[i] : (current_min + arr[i]);
        min_sum = (current_min < min_sum) ? current_min : min_sum;
    }

    return min_sum;
}

int main() {
    int arr[] = {3, 1, -4, 2, 0}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMinSubarraySum(arr, n);
    printf("Minimum subarray sum: %d\n", result);

    return 0;
}
