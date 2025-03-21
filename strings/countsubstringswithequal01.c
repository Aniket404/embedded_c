// C implementation of the above approach
#include <stdio.h>
#include <string.h>

// Find minimum between two numbers.
int min(int num1, int num2)
{
	return (num1 > num2) ? num2 : num1;
}

// Function to find the count of substrings with equal no.
// of consecutive 0's and 1's
int countSubstring(char S[], int n)
{
	// To store the total count of substrings
	int ans = 0;

	int i = 0;

	// Traversing the string
	while (i < n) {

		// Count of consecutive 0's & 1's
		int cnt0 = 0, cnt1 = 0;

		// Counting subarrays of type "01"
		if (S[i] == '0') {

			// Count the consecutive 0's
			while (i < n && S[i] == '0') {
				cnt0++;
				i++;
			}

			// If consecutive 0's ends then check for
			// consecutive 1's
			int j = i;

			// Counting consecutive 1's
			while (j < n && S[j] == '1') {
				cnt1++;
				j++;
			}
		}

		// Counting subarrays of type "10"
		else {

			// Count consecutive 1's
			while (i < n && S[i] == '1') {
				cnt1++;
				i++;
			}

			// If consecutive 1's ends then check for
			// consecutive 0's
			int j = i;

			// Count consecutive 0's
			while (j < n && S[j] == '0') {
				cnt0++;
				j++;
			}
		}

		// Update the total count of substrings with minimum
		// of (cnt0, cnt1)
		ans += min(cnt0, cnt1);
	}

	// Return answer
	return ans;
}

// Driver code
int main()
{
	char S[] = "0011";
	int n = strlen(S);

	// Function to print the count of substrings
	printf("%d\n", countSubstring(S, n));
	return 0;
}

