#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256  // Maximum number of characters in ASCII

// Function to find and print duplicate characters
void findDuplicates(char str[]) {
    int count[MAX_CHAR] = {0}; // Array to store frequency of each character

    // Traverse through the string and count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++; // Increment the count for the character
    }

    // Print characters that appear more than once
    printf("Duplicate characters: ");
    int foundDuplicate = 0; // Flag to check if we found any duplicates
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] > 1) {
            printf("\"%c\" ", str[i]);
            count[str[i]] = 0; // Avoid printing the same character multiple times
            foundDuplicate = 1; // Mark that a duplicate was found
        }
    }

    if (!foundDuplicate) {
        printf("None\n");
    } else {
        printf("\n");
    }
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find and print duplicate characters
    findDuplicates(str);

    return 0;
}
