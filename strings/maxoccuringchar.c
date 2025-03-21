#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256  // Covers all possible ASCII characters

// Function to find the maximum occurring character
char maxOccurringChar(const char *str) {
    int freq[ASCII_SIZE] = {0};  // Frequency array initialized to 0
    int maxFreq = 0;
    char maxChar = '\0';

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    return maxChar;
}

// Driver code
int main() {
    char str[100];  // Input buffer with a limit

    // Take input while keeping memory in mind
    printf("Enter a string: ");
    scanf("%99s", str);  // Prevents buffer overflow

    char result = maxOccurringChar(str);
    printf("Maximum occurring character: %c\n", result);

    return 0;
}
