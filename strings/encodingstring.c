#include <stdio.h>
#include <string.h>

// Function to encode a string
void encodeString(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Only encode lowercase letters
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' + 3) % 26) + 'a';
        }
    }
}

// Driver code
int main() {
    char str[100];  // Define a buffer with a limit

    // Taking input while keeping memory in mind
    printf("Enter a lowercase string: ");
    scanf("%99s", str);  // Prevents buffer overflow

    encodeString(str);

    printf("Encoded string: %s\n", str);
    
    return 0;
}
