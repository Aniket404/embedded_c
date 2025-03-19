#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the string has balanced parentheses
bool isBalanced(char str[]) {
    char stack[100];  // Stack to keep track of opening parentheses
    int top = -1;     // Initialize top to -1 (empty stack)
    
    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        // If the character is an opening parenthesis, push it onto the stack
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stack[++top] = str[i];  // Increment top and push the character
        }
        // If the character is a closing parenthesis, check if it matches the top of the stack
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            // If the stack is empty or top doesn't match, return false
            if (top == -1) {
                return false;
            }
            char topChar = stack[top--];  // Pop from stack
            
            // Check if the popped character matches the closing character
            if ((str[i] == ')' && topChar != '(') || 
                (str[i] == ']' && topChar != '[') || 
                (str[i] == '}' && topChar != '{')) {
                return false;
            }
        }
    }
    
    // If the stack is empty, parentheses are balanced; otherwise, not balanced
    return top == -1;
}

int main() {
    char str[100];
    
    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Check if the parentheses are balanced and output the result
    if (isBalanced(str)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
