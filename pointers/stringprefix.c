#include <stdio.h>
#include <stdbool.h>

// Function to check if str2 is a prefix of str1 using pointers
bool isPrefix(const char *str1, const char *str2) {
    while (*str2 != '\0') {
        if (*str1 != *str2) {
            return false;  // Mismatch found
        }
        str1++;
        str2++;
    }
    return true;  // All characters matched
}

int main() {
    char *str1 = "Hello";
    char *str2 = "Hel";

    if (isPrefix(str1, str2)) {
        printf("\"%s\" is a prefix of \"%s\"\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a prefix of \"%s\"\n", str2, str1);
    }

    return 0;
}
