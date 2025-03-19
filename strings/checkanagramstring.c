#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    // If the lengths of the strings are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Sort the strings
    char temp1[strlen(str1) + 1], temp2[strlen(str2) + 1];
    strcpy(temp1, str1);
    strcpy(temp2, str2);

    // Sort the copies of the strings
    for (int i = 0; temp1[i] != '\0'; i++) {
        for (int j = i + 1; temp1[j] != '\0'; j++) {
            if (temp1[i] > temp1[j]) {
                char temp = temp1[i];
                temp1[i] = temp1[j];
                temp1[j] = temp;
            }
        }
    }

    for (int i = 0; temp2[i] != '\0'; i++) {
        for (int j = i + 1; temp2[j] != '\0'; j++) {
            if (temp2[i] > temp2[j]) {
                char temp = temp2[i];
                temp2[i] = temp2[j];
                temp2[j] = temp;
            }
        }
    }

    // Compare the sorted strings
    if (strcmp(temp1, temp2) == 0) {
        return 1; // Strings are anagrams
    } else {
        return 0; // Strings are not anagrams
    }
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if the strings are anagrams and display the result
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
