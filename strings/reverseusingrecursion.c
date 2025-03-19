#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    // Base case: if start index is greater than or equal to end index, stop recursion
    if (start >= end) {
        return;
    }
    
    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call the function to reverse the next part of the string
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    // Get the length of the string
    int length = strlen(str);

    // Reverse the string using recursion
    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
