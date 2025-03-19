#include <stdio.h>

#define MAX_CHAR 256  // Maximum number of characters (assuming ASCII character set)

char firstNonRepeatedCharacter(char str[]) {
    int count[MAX_CHAR] = {0};  // Array to store frequency of each character

    // Traverse the string and store the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Traverse the string again and return the first character with a frequency of 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  // Return null character if no non-repeated character is found
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Call the function to find the first non-repeated character
    char result = firstNonRepeatedCharacter(str);

    // Output the result
    if (result != '\0') {
        printf("The first non-repeated character is: %c\n", result);
    } else {
        printf("No non-repeated character found.\n");
    }

    return 0;
}
