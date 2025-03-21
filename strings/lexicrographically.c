#include <stdio.h>
#include <string.h>

// Function to find the lexicographically minimal rotation
void lexicographicallyMinimalRotation(char str[]) {
    int n = strlen(str);
    char temp[2 * n + 1];  // Concatenating string to itself for rotations
    strcpy(temp, str);
    strcat(temp, str);

    int minIndex = 0;  // Assume the first rotation is the smallest

    for (int i = 1; i < n; i++) {
        if (strncmp(temp + i, temp + minIndex, n) < 0) {
            minIndex = i;  // Update if a smaller rotation is found
        }
    }

    // Print the lexicographically smallest rotation
    printf("Lexicographically minimal rotation: ");
    for (int i = minIndex; i < minIndex + n; i++) {
        printf("%c", temp[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    // Taking user input
    printf("Enter a string: ");
    scanf("%s", str);

    lexicographicallyMinimalRotation(str);

    return 0;
}
