#include <stdio.h>
#include <stdbool.h>

// Function to check if a string is a palindrome using pointers
bool isPalindrome(char *str) {
    char *left = str;
    char *right = str;

    // Move right to the end of the string
    while (*right != '\0') {
        right++;
    }
    right--;  // Step back to last valid character (not '\0')

    // Compare characters from both ends
    while (left < right) {
        if (*left != *right) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    char str[] = "radar";

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
