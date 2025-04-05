#include <stdio.h>

void splitString(char *str, char **firstHalf, char **secondHalf) {
    int length = 0;
    char *ptr = str;

    // Calculate string length
    while (*ptr != '\0') {
        ptr++;
        length++;
    }

    int mid = length / 2;

    // Split at midpoint
    *firstHalf = str;
    str[mid] = '\0';               // null-terminate first half
    *secondHalf = str + mid + 1;   // start second half after '\0'
}

int main() {
    char str[] = "Hello World";  // Modifiable array
    char *first = NULL;
    char *second = NULL;

    splitString(str, &first, &second);

    printf("First half: \"%s\"\n", first);
    printf("Second half: \"%s\"\n", second);

    return 0;
}
