#include <stdio.h>

void rearrange(int arr[], int size) {
    int positive[size];
    int negative[size];
    int posIndex = 0, negIndex = 0;

    // Separate positive and negative numbers into different arrays
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            positive[posIndex++] = arr[i];
        } else {
            negative[negIndex++] = arr[i];
        }
    }

    // Merge the two arrays back into the original array with positives first
    int index = 0;
    for (int i = 0; i < posIndex; i++) {
        arr[index++] = positive[i];
    }
    for (int i = 0; i < negIndex; i++) {
        arr[index++] = negative[i];
    }
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9}; // Example input
    int size = sizeof(arr) / sizeof(arr[0]);
    
    rearrange(arr, size);
    
    // Print the rearranged array
    printf("Rearranged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
