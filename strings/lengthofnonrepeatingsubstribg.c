#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

// Function to find the length of the longest substring without repeating characters
int longestUniqueSubstring(char *str) {
    int lastIndex[MAX_CHAR];  // Array to store the last index of characters
    int maxLength = 0;  // Stores maximum length of unique substring
    int l = 0;  // Left pointer of window

    memset(lastIndex, -1, sizeof(lastIndex));  // Initialize all indices to -1

    for (int r = 0; str[r] != '\0'; r++) {
        if (lastIndex[(unsigned char)str[r]] >= l) {
            l = lastIndex[(unsigned char)str[r]] + 1;  // Move left pointer
        }
        lastIndex[(unsigned char)str[r]] = r;  // Update last index of character
        maxLength = (r - l + 1 > maxLength) ? (r - l + 1) : maxLength;  // Update max length
    }

    return maxLength;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int result = longestUniqueSubstring(str);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}
