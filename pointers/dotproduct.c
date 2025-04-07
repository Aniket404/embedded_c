#include <stdio.h>

// Function to compute dot product using pointers
int dotProduct(int *vec1, int *vec2, int size) {
    int result = 0;
    int *end = vec1 + size;

    while (vec1 < end) {
        result += (*vec1) * (*vec2);
        vec1++;
        vec2++;
    }

    return result;
}

int main() {
    int vec1[] = {1, 2, 3};
    int vec2[] = {4, 5, 6};
    int size = sizeof(vec1) / sizeof(vec1[0]);

    int result = dotProduct(vec1, vec2, size);
    printf("Dot product: %d\n", result);

    return 0;
}
