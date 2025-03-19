#include <stdio.h>

int stringToInteger(char str[]) {
    int result = 0;  // Initialize result

    // Traverse each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a valid digit (between '0' and '9')
        if (str[i] < '0' || str[i] > '9') {
            printf("Invalid input. The string should only contain digits.\n");
            return -1;  // Return error code
        }

        // Convert the character to an integer and update result
        result = result * 10 + (str[i] - '0');
    }

    return result;  // Return the integer representation
}

int main() {
    char str[100];

    // Prompt user for input
    printf("Enter a string of digits: ");
    scanf("%s", str);

    // Convert string to integer
    int num = stringToInteger(str);

    if (num != -1) {
        printf("The integer representation is: %d\n", num);
    }

    return 0;
}
