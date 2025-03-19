#include <stdio.h>

// Function to count the occurrences of a character in a string
int countOccurrences(char str[], char targetChar) {
    int count = 0;
    
    // Traverse the string and count the occurrences of targetChar
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == targetChar) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100], targetChar;
    
    // Input the string and the target character
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the character to count: ");
    scanf(" %c", &targetChar);  // Notice the space before %c to avoid any unwanted newline character
    
    // Count the occurrences and display the result
    int count = countOccurrences(str, targetChar);
    printf("The character '%c' appears %d times.\n", targetChar, count);
    
    return 0;
}
