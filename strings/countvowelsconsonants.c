#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countVowelsAndConsonants(char str[]) {
    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(str); i++) {
        // Convert to lowercase to simplify comparison
        char ch = tolower(str[i]);

        // Check if the character is a letter
        if (isalpha(ch)) {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print results
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    countVowelsAndConsonants(str);

    return 0;
}
