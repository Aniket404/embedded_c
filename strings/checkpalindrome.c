#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    // Check characters from both ends
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome if mismatch occurs
        }
        left++;
        right--;
    }
    return true; // Palindrome if no mismatch found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    if (isPalindrome(str)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
