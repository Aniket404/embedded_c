#include <stdio.h>

// Function to count elements using pointer arithmetic
int countElements(int *start, int *end) {
    return end - start; // end should point just past the last element
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Example array

    // Pass the pointer to first and one-past-last element
    int count = countElements(arr, arr + 6); // arr + 5 = address past the last element

    printf("Number of elements in array: %d\n", count);

    return 0;
}
