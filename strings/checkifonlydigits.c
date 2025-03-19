#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if the string contains only digits
bool isDigitsOnly(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        // Check if the current character is a digit
        if (str[i] < '0' || str[i] > '9') {
            return false; // If not a digit, return false
        }
    }
    return true; // If all characters are digits, return true
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string contains only digits and print the result
    if (isDigitsOnly(str)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
