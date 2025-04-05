#include <stdio.h>

// Function to concatenate str2 at the end of str1 using only pointers
void concat(char *str1, const char *str2) {
    // Move str1 pointer to the end of the string
    while (*str1 != '\0') {
        str1++;
    }

    // Copy characters from str2 to the end of str1
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0'; // Null-terminate the resulting string
}

int main() {
    char str1[100] = "Good ";  // Make sure str1 has enough space
    char *str2 = "Morning";

    printf("Before concatenation: \"%s\"\n", str1);

    concat(str1, str2);  // Concatenate using pointer-only function

    printf("After concatenation: \"%s\"\n", str1);

    return 0;
}
