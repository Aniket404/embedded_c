#include <stdio.h>

// Function to trim leading and trailing spaces using pointer arithmetic
void trimWhitespace(char *str) {
    char *start = str;
    char *end;

    // Step 1: Skip leading spaces
    while (*start == ' ') {
        start++;
    }

    // Step 2: If string is all spaces
    if (*start == '\0') {
        *str = '\0';
        return;
    }

    // Step 3: Move 'end' to last character
    end = start;
    while (*end != '\0') {
        end++;
    }
    end--; // point to last character (before '\0')

    // Step 4: Skip trailing spaces
    while (end > start && *end == ' ') {
        end--;
    }

    // Step 5: Shift trimmed string to beginning
    char *dest = str;
    while (start <= end) {
        *dest++ = *start++;
    }

    // Step 6: Null-terminate
    *dest = '\0';
}

int main() {
    char str[] = "   Hello World   ";
    
    printf("Before trim: \"%s\"\n", str);
    trimWhitespace(str);
    printf("After trim:  \"%s\"\n", str);

    return 0;
}
