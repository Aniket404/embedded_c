#include <stdio.h>
#include <string.h>

// Function to expand around center and find the longest palindrome
void expandAroundCenter(char str[], int left, int right, int *start, int *maxLength) {
    while (left >= 0 && right < strlen(str) && str[left] == str[right]) {
        // If we find a longer palindrome, update start and maxLength
        if (right - left + 1 > *maxLength) {
            *start = left;
            *maxLength = right - left + 1;
        }
        left--;
        right++;
    }
}

// Function to find the longest palindrome substring
void findLongestPalindromeSubstring(char str[]) {
    int start = 0, maxLength = 1; // Start index and length of longest palindrome found
    
    for (int i = 0; i < strlen(str); i++) {
        // Odd-length palindromes (expand around single character)
        expandAroundCenter(str, i, i, &start, &maxLength);
        // Even-length palindromes (expand around two adjacent characters)
        expandAroundCenter(str, i, i + 1, &start, &maxLength);
    }

    // Print the longest palindrome substring
    printf("The longest palindrome substring is: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Call the function to find the longest palindrome substring
    findLongestPalindromeSubstring(str);

    return 0;
}
