#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_LEN 1000  // Memory limit for input string

// Function to find the minimum cuts required for palindrome partitioning
int minPalindromeCuts(char *str) {
    int n = strlen(str);
    if (n == 0) return 0;

    int minCuts[n];  // Minimum cuts needed for substrings str[0...i]
    int isPalindrome[n][n];  // Palindrome table

    memset(isPalindrome, 0, sizeof(isPalindrome));

    for (int i = 0; i < n; i++) {
        minCuts[i] = i;  // Worst case: each character is its own partition

        for (int j = 0; j <= i; j++) {
            if (str[i] == str[j] && (i - j <= 1 || isPalindrome[j + 1][i - 1])) {
                isPalindrome[j][i] = 1;

                // If the whole string from j to i is palindrome, update minCuts
                if (j == 0)
                    minCuts[i] = 0;
                else
                    minCuts[i] = (minCuts[i] < minCuts[j - 1] + 1) ? minCuts[i] : (minCuts[j - 1] + 1);
            }
        }
    }
    return minCuts[n - 1];
}

// Driver code
int main() {
    char str[MAX_LEN];

    // Input handling with memory safety
    printf("Enter a string: ");
    scanf("%999s", str);  // Avoids buffer overflow

    int result = minPalindromeCuts(str);
    printf("Minimum cuts needed: %d\n", result);

    return 0;
}
