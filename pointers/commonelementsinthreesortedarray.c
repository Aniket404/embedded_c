#include <stdio.h>

// Function to find common elements using three pointers
void findCommonInThreeSortedArrays(int *arr1, int *arr2, int *arr3, int size1, int size2, int size3) {
    int *p1 = arr1;
    int *p2 = arr2;
    int *p3 = arr3;

    printf("Common elements: ");
    while (p1 < arr1 + size1 && p2 < arr2 + size2 && p3 < arr3 + size3) {
        if (*p1 == *p2 && *p2 == *p3) {
            printf("%d ", *p1);
            p1++;
            p2++;
            p3++;
        }
        else if (*p1 < *p2) {
            p1++;
        }
        else if (*p2 < *p3) {
            p2++;
        }
        else {
            p3++;
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    findCommonInThreeSortedArrays(arr1, arr2, arr3, size1, size2, size3);

    return 0;
}
