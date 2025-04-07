#include <stdio.h>

// Custom strtok() using pointers
char* my_strtok(char *str, char delim) {
    static char *input = NULL;

    // First call with a string
    if (str != NULL)
        input = str;

    // If input is exhausted
    if (input == NULL || *input == '\0')
        return NULL;

    char *token_start = input;

    // Traverse until delimiter or end of string
    while (*input != '\0') {
        if (*input == delim) {
            *input = '\0';      // Terminate token
            input++;            // Advance to next char
            return token_start;
        }
        input++;
    }

    // Last token (no delimiter at end)
    return token_start;
}
int main() {
    char str[] = "embedded,systems,linux";
    char *token;

    token = my_strtok(str, ',');
    while (token != NULL) {
        printf("%s\n", token);
        token = my_strtok(NULL, ',');
    }

    return 0;
}
