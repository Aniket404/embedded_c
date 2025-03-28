#include <stdio.h>
#include <stdlib.h>

// Function prototype for the comparison function
int cmp(const void *a, const void *b);

// Function to find the longest consecutive subsequence
void findLongestConsecutiveSubsequence(int arr[], int size) {
    // Step 1: Sort the array to identify consecutive subsequences
    qsort(arr, size, sizeof(int), cmp);

    int maxLength = 1;
    int currentLength = 1;
    int start = 0, end = 0;

    // Step 2: Traverse through the sorted array to find the longest subsequence
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            // Consecutive elements
            currentLength++;
        } else if (arr[i] != arr[i - 1]) {
            // Reset current length for non-consecutive elements
            currentLength = 1;
        }

        // Track the longest sequence
        if (currentLength > maxLength) {
            maxLength = currentLength;
            start = i - currentLength + 1;
            end = i;
        }
    }

    // Step 3: Print the longest consecutive subsequence
    printf("Longest consecutive subsequence: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Comparison function for sorting
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {1, 9, 3, 10, 4, 20, 2}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);

    findLongestConsecutiveSubsequence(arr, size);

    return 0;
}
