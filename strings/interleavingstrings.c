#include <stdio.h>
#include <string.h>

// Function to check if 'interleaved' is a valid interleaving of 'str1' and 'str2'
int isInterleaved(char *str1, char *str2, char *interleaved) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int lenI = strlen(interleaved);

    // If the length of the interleaved string doesn't match, return false
    if (len1 + len2 != lenI) {
        return 0;
    }

    // Pointers to track positions in str1, str2, and interleaved
    int i = 0, j = 0, k = 0;

    // Traverse the interleaved string
    while (k < lenI) {
        if (i < len1 && str1[i] == interleaved[k]) {
            i++;  // Move in str1
        } 
        else if (j < len2 && str2[j] == interleaved[k]) {
            j++;  // Move in str2
        } 
        else {
            return 0;  // If character doesn't match either, it's not a valid interleaving
        }
        k++;
    }

    return 1;  // If all characters match correctly, return true
}

int main() {
    char str1[100], str2[100], interleaved[200];

    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    printf("Enter interleaved string: ");
    scanf("%s", interleaved);

    if (isInterleaved(str1, str2, interleaved)) {
        printf("True\n");  // Valid interleaving
    } else {
        printf("False\n");  // Invalid interleaving
    }

    return 0;
}
