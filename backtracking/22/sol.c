#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

// Function declaration for the generateParenthesis function
char** generateParenthesis(int n, int* returnSize);

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

int main() {
    // Test case 1: n = 3
    printf("Test case 1:\n");
    int n1 = 3;
    printf("Input: n = %d\n", n1);
    printf("Expected: [\"((()))\", \"(()())\", \"(())()\", \"()(())\", \"()()()\"]\n");
    
    int returnSize1;
    char** result1 = generateParenthesis(n1, &returnSize1);
    
    printf("Output: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("\"%s\"", result1[i]);
        if (i < returnSize1 - 1) printf(", ");
    }
    printf("]\n\n");
    
    // Free memory
    for (int i = 0; i < returnSize1; i++) {
        free(result1[i]);
    }
    free(result1);
    
    // Test case 2: n = 1
    printf("Test case 2:\n");
    int n2 = 1;
    printf("Input: n = %d\n", n2);
    printf("Expected: [\"()\"]\n");
    
    int returnSize2;
    char** result2 = generateParenthesis(n2, &returnSize2);
    
    printf("Output: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("\"%s\"", result2[i]);
        if (i < returnSize2 - 1) printf(", ");
    }
    printf("]\n\n");
    
    // Free memory
    for (int i = 0; i < returnSize2; i++) {
        free(result2[i]);
    }
    free(result2);
    
    // Test case 3: n = 2 (additional test)
    printf("Additional test:\n");
    int n3 = 2;
    printf("Input: n = %d\n", n3);
    printf("Expected: [\"(())\", \"()()\"]\n");
    
    int returnSize3;
    char** result3 = generateParenthesis(n3, &returnSize3);
    
    printf("Output: [");
    for (int i = 0; i < returnSize3; i++) {
        printf("\"%s\"", result3[i]);
        if (i < returnSize3 - 1) printf(", ");
    }
    printf("]\n");
    
    // Free memory
    for (int i = 0; i < returnSize3; i++) {
        free(result3[i]);
    }
    free(result3);
    
    printf("\nAll test cases completed!\n");
    return 0;
}