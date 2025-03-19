#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if the string is a pangram
int isPangram(char str[]) {
    // Create a boolean array to track the occurrence of each letter
    int letters[26] = {0};  // Array to store occurrences of 'a' to 'z'

    // Iterate over the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase
        char c = tolower(str[i]);
        
        // If the character is a letter (between 'a' and 'z'), mark it in the array
        if (c >= 'a' && c <= 'z') {
            letters[c - 'a'] = 1;
        }
    }

    // Check if all letters from 'a' to 'z' are found
    for (int i = 0; i < 26; i++) {
        if (letters[i] == 0) {
            return 0;  // Not a pangram
        }
    }
    
    return 1;  // It is a pangram
}

int main() {
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove the newline character
    
    if (isPangram(str)) {
        printf("True\n");  // It is a pangram
    } else {
        printf("False\n");  // It is not a pangram
    }
    
    return 0;
}
