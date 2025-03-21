#include <stdio.h>
#include <string.h>

// Function to count occurrences of a substring in a main string
int countSubstringOccurrences(char *mainStr, char *subStr) {
    int count = 0;
    char *pos = mainStr;

    int subLen = strlen(subStr);
    
    // Loop through the main string to find occurrences
    while ((pos = strstr(pos, subStr)) != NULL) {
        count++;      // Found an occurrence, increment count
        pos += subLen; // Move pointer ahead to avoid overlap
    }

    return count;
}

// Driver Code
int main() {
    char mainStr[100], subStr[50];

    // Taking input while keeping memory in mind
    printf("Enter main string: ");
    scanf("%99s", mainStr);  // Prevents buffer overflow

    printf("Enter substring: ");
    scanf("%49s", subStr);   // Prevents buffer overflow

    int result = countSubstringOccurrences(mainStr, subStr);
    
    printf("Occurrences of '%s' in '%s': %d\n", subStr, mainStr, result);
    
    return 0;
}
