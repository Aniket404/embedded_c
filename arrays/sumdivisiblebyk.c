#include <stdio.h>

// Function to check if an array can be divided into pairs with sum divisible by k
int canBeDividedIntoPairs(int arr[], int n, int k) {
    // If the array length is odd, it's impossible to form pairs
    if (n % 2 != 0) 
        return 0;

    int freq[k]; // Array to store frequency of remainders
    for (int i = 0; i < k; i++)
        freq[i] = 0; // Initialize frequency array to zero

    // Compute frequency of each remainder when divided by k
    for (int i = 0; i < n; i++) {
        int rem = ((arr[i] % k) + k) % k; // Ensure positive remainder
        freq[rem]++;
    }

    // Check if elements can be paired
    for (int i = 0; i < k; i++) {
        if (i == 0) { // Elements fully divisible by k must be even in count
            if (freq[i] % 2 != 0) 
                return 0;
        } else if (i == k - i) { // Elements with remainder k/2 must be even in count
            if (freq[i] % 2 != 0)
                return 0;
        } else { // Check complementary remainder pairs
            if (freq[i] != freq[k - i]) 
                return 0;
        }
    }

    return 1; // Valid pairings found
}

int main() {
    int arr[] = {9, 7, 5, -3}; // Example input
    int k = 6;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (canBeDividedIntoPairs(arr, n, k))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
