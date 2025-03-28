#include <stdio.h>

int findMajorityElement(int arr[], int size) {
    int candidate = -1, count = 0;
    
    // First pass: Find the candidate for majority element
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Second pass: Verify if the candidate is the majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    
    // If the candidate appears more than n/2 times, return it
    if (count > size / 2) {
        return candidate;
    } else {
        return -1; // No majority element
    }
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int majority = findMajorityElement(arr, size);
    
    if (majority != -1)
        printf("Majority element: %d\n", majority);
    else
        printf("No majority element found.\n");
    
    return 0;
}
