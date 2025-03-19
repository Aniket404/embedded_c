#include <stdio.h>
#include <string.h>

int checkRotation(char str1[], char str2[]) {
    // Check if both strings are of the same length
    if (strlen(str1) != strlen(str2)) {
        return -1; // Not rotations if lengths don't match
    }

    // Concatenate str1 with itself
    char temp[2 * strlen(str1) + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    char *found = strstr(temp, str2);

    if (found != NULL) {
        // Calculate the rotation distance (the number of positions shifted)
        int index = found - temp;
        return index; // Index will indicate the number of positions for rotation
    } else {
        return -1; // Not a rotation
    }
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  // Remove newline character
    
    int rotation = checkRotation(str1, str2);
    
    if (rotation == -1) {
        printf("The strings are not rotations of each other.\n");
    } else {
        printf("Rotation: %dL\n", rotation); // L for Left rotation (positive rotation)
    }

    return 0;
}
