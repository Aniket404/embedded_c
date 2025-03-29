#include <stdio.h>

// Function to find a peak element using binary search
int findPeakElement(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // If mid element is greater than the next, the peak must be on the left
        if (arr[mid] > arr[mid + 1]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return arr[left]; // Peak element
}

// Function to print the peak element
void printPeakElement(int arr[], int n) {
    int peak = findPeakElement(arr, n);
    printf("Peak Element: %d\n", peak);
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    printPeakElement(arr, n);

    return 0;
}
