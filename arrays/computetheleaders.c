#include <stdio.h>

// Function to find leaders in an array
void findLeaders(int arr[], int n) {
    int maxFromRight = arr[n - 1]; // Rightmost element is always a leader
    printf("%d ", maxFromRight); // Print the last element

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i]; // Update maxFromRight
            printf("%d ", maxFromRight); // Print leader
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Leaders in the array: ");
    findLeaders(arr, n);

    return 0;
}
