#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function to generate all permutations of the string
void permute(char str[], int left, int right) {
    // Base case: If left equals right, print the permutation
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) {
            // Swap the current character with the first character
            swap(&str[left], &str[i]);
            
            // Recursively call the function to generate permutations for the remaining string
            permute(str, left + 1, right);
            
            // Backtrack: Swap the characters back to restore the original order
            swap(&str[left], &str[i]);
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    int length = strlen(str);
    
    printf("All permutations of the string are:\n");
    permute(str, 0, length - 1);
    
    return 0;
}
