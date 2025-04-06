#include <stdio.h>

// Function to convert a string to lowercase using pointers
void toLowerCase(char *str) {
    char *ptr = str;

    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + 32;  // Convert to lowercase
        }
        ptr++;
    }
}

int main() {
    char str[] = "HELLO WORLD";  // Modifiable array

    printf("Original: %s\n", str);
    toLowerCase(str);
    printf("Lowercase: %s\n", str);

    return 0;
}
