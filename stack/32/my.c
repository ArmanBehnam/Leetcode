#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longestValidParentheses(char* s) {
    // Edge case: empty string
    if (s == NULL || *s == '\0') {
        return 0;
    }
    
    int length = strlen(s);
    int maxLength = 0;
    
    // Create a stack to store indices
    int* stack = (int*)malloc((length + 1) * sizeof(int));
    if (!stack) return 0; // Memory allocation check
    
    int top = 0;
    stack[top++] = -1; // Initialize with -1 as base for empty stack calculations
    
    for (int i = 0; i < length; i++) {
        if (s[i] == '(') {
            // Push the index of opening parenthesis
            stack[top++] = i;
        } else { // s[i] == ')'
            // Pop the last opening parenthesis or base
            top--;
            
            if (top == 0) {
                // If stack is empty, push current index as new base
                stack[top++] = i;
            } else {
                // Calculate length of valid substring ending at current position
                int currentLength = i - stack[top - 1];
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                }
            }
        }
    }
    
    // Free allocated memory
    free(stack);
    
    return maxLength;
}