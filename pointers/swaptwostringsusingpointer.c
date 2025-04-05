#include <stdio.h>

// Function to swap two strings using pointer to pointer
void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    // Declare and initialize strings
    char *str1 = "hello";
    char *str2 = "world";

    printf("Before swap:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // Swap using pointer to pointer
    swapStrings(&str1, &str2);

    printf("\nAfter swap:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}
