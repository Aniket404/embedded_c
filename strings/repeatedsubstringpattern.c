#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string can be constructed by repeating a substring
bool repeatedSubstringPattern(char *str) {
    int len = strlen(str);
    
    // Edge case for single character or empty string
    if (len < 2) return false;

    // Check for possible substring lengths
    for (int i = 1; i <= len / 2; i++) {
        // If the length of the string is divisible by the current length
        if (len % i == 0) {
            // Create a substring of length i and check if repeating it matches the original string
            char substring[i + 1];
            strncpy(substring, str, i);
            substring[i] = '\0';  // Null-terminate the substring

            int repeat_count = len / i;
            char repeated[repeat_count * i + 1];
            repeated[0] = '\0';  // Start with an empty string

            // Repeat the substring 'repeat_count' times
            for (int j = 0; j < repeat_count; j++) {
                strcat(repeated, substring);
            }

            // Check if the repeated string matches the original string
            if (strcmp(repeated, str) == 0) {
                return true;
            }
        }
    }

    // Return false if no repeated pattern is found
    return false;
}

// Driver function to take input and test the repeated substring pattern function
int main() {
    char str[1000];
    
    // Input handling
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Call the function to check repeated substring pattern
    if (repeatedSubstringPattern(str)) {
        printf("O/P: True\n");
    } else {
        printf("O/P: False\n");
    }

    return 0;
}
