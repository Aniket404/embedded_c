#include <stdio.h>

// Function to find first non-repeated character using pointers
char firstNonRepeatedChar(char *str) {
    int count[256] = {0};  // Frequency array for all ASCII characters
    char *ptr = str;

    // First pass: count occurrences
    while (*ptr != '\0') {
        count[(unsigned char)*ptr]++;
        ptr++;
    }

    // Second pass: find first character with count == 1
    ptr = str;
    while (*ptr != '\0') {
        if (count[(unsigned char)*ptr] == 1) {
            return *ptr;
        }
        ptr++;
    }

    return '\0';  // Return null character if all characters are repeated
}

int main() {
    char str[] = "racecar";

    char result = firstNonRepeatedChar(str);
    if (result != '\0') {
        printf("First non-repeated character: '%c'\n", result);
    } else {
        printf("No non-repeated character found.\n");
    }

    return 0;
}
