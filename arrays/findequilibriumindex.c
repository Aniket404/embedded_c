#include <stdio.h>

int findEquilibriumIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    // Traverse the array to find the equilibrium index
    for (int i = 0; i < size; i++) {
        // Subtract the current element from totalSum to get right sum
        totalSum -= arr[i];

        // Check if the left sum is equal to the right sum
        if (leftSum == totalSum) {
            return i;  // Equilibrium index found
        }

        // Add the current element to leftSum
        leftSum += arr[i];
    }

    return -1;  // No equilibrium index found
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);

    int equilibriumIndex = findEquilibriumIndex(arr, size);

    if (equilibriumIndex != -1) {
        printf("Equilibrium index: %d\n", equilibriumIndex);
    } else {
        printf("No equilibrium index found.\n");
    }

    return 0;
}
