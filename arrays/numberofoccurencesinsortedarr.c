#include <stdio.h>

int countOccurrences(int arr[], int size, int num) {
    int count = 0;
    
    // Iterate through the sorted array
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3}; // Example sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 2; // Number to count occurrences of
    
    int occurrences = countOccurrences(arr, size, num);
    printf("Number of occurrences of %d: %d\n", num, occurrences);
    
    return 0;
}
