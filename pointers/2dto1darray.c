#include <stdio.h>

void flatten2DArray(int rows, int cols, int arr[rows][cols], int *flatArr) {
    int *ptr = &arr[0][0];
    for (int i = 0; i < rows * cols; i++) {
        *(flatArr + i) = *(ptr + i);
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    int flat[4];

    flatten2DArray(2, 2, arr, flat);

    printf("Flattened 1D array: ");
    printArray(flat, 4);

    return 0;
}
