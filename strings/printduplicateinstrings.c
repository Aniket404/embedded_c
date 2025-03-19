#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 256  // For ASCII characters

void printDuplicateChars(char str[]) {
    int count[MAX_CHARACTERS] = {0};  // Array to store count of characters
    int length = strlen(str);

    // Traverse through the string and count the occurrences of each character
    for (int i = 0; i < length; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Print characters that appear more than once
    printf("Duplicate characters are: ");
    for (int i = 0; i < length; i++) {
        if (count[(unsigned char)str[i]] > 1) {
            printf("%c ", str[i]);
            count[(unsigned char)str[i]] = 0;  // To avoid printing the same character again
        }
    }
    printf("\n");
}

int main() {
    char str[100];  // Array to store the string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input with spaces

    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Call function to print duplicates
    printDuplicateChars(str);

    return 0;
}
