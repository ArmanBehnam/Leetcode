#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Backtracking function to generate parentheses combinations
 * @param current - Current string being built
 * @param open - Count of open parentheses
 * @param close - Count of close parentheses
 * @param max - Maximum number of pairs
 * @param result - Array to store results
 * @param count - Pointer to count of results
 */
void backtrack(char* current, int open, int close, int max, char** result, int* count, int pos) {
    // Base case: if we've used all parentheses
    if (pos == max * 2) {
        current[pos] = '\0';
        result[*count] = strdup(current);
        (*count)++;
        return;
    }
    
    // We can add an open parenthesis if we haven't used all n
    if (open < max) {
        current[pos] = '(';
        backtrack(current, open + 1, close, max, result, count, pos + 1);
    }
    
    // We can add a closing parenthesis if there are unclosed open parentheses
    if (close < open) {
        current[pos] = ')';
        backtrack(current, open, close + 1, max, result, count, pos + 1);
    }
}

/**
 * Function to calculate the number of valid combinations for n pairs
 * This is the Catalan number: C(n) = (2n)! / ((n+1)! * n!)
 */
int calculateCatalanNumber(int n) {
    // For n <= 8, we can use a lookup table for efficiency
    int catalanNumbers[] = {1, 1, 2, 5, 14, 42, 132, 429, 1430};
    if (n <= 8) {
        return catalanNumbers[n];
    }
    
    // For larger values, compute it (though the problem constraints limit n to 8)
    long long catalan = 1;
    for (int i = 0; i < n; i++) {
        catalan = catalan * 2 * (2 * i + 1) / (i + 2);
    }
    return (int)catalan;
}

/**
 * Generate all combinations of well-formed parentheses.
 * @param n - Number of pairs of parentheses
 * @param returnSize - Pointer to store the size of the returned array
 * @return Array of strings containing all combinations
 */
char** generateParenthesis(int n, int* returnSize) {
    // Calculate number of combinations (Catalan number)
    *returnSize = calculateCatalanNumber(n);
    
    // Allocate memory for result array
    char** result = (char**)malloc(*returnSize * sizeof(char*));
    if (!result) return NULL;
    
    // Allocate memory for temporary string
    char* current = (char*)malloc((2 * n + 1) * sizeof(char));
    if (!current) {
        free(result);
        return NULL;
    }
    
    // Initialize count
    int count = 0;
    
    // Generate combinations
    backtrack(current, 0, 0, n, result, &count, 0);
    
    // Free temporary string
    free(current);
    
    return result;
}

/**
 * Function to test the implementation
 */
void runParenthesisTest(int n, char** expected, int expectedCount) {
    printf("Test case for n = %d:\n", n);
    
    int returnSize;
    char** result = generateParenthesis(n, &returnSize);
    
    printf("Expected count: %d\n", expectedCount);
    printf("Got count: %d\n", returnSize);
    
    // Print generated combinations
    printf("Generated combinations:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("  %s\n", result[i]);
    }
    
    // Free memory
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);
    
    printf("\n");
}

/**
 * Main function to run tests
 */
int main() {
    // Test case 1: n = 3
    char* expected1[] = {"((()))", "(()())", "(())()", "()(())", "()()()"};
    runParenthesisTest(3, expected1, 5);
    
    // Test case 2: n = 1
    char* expected2[] = {"()"};
    runParenthesisTest(1, expected2, 1);
    
    // Test case 3: n = 2
    char* expected3[] = {"(())", "()()"};
    runParenthesisTest(2, expected3, 2);
    
    return 0;
}