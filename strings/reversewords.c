#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    // Reverse the whole string first
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Now reverse each word in the reversed string
    start = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = 0;
    
    reverseWords(sentence);
    
    printf("Reversed Sentence: %s\n", sentence);
    return 0;
}
