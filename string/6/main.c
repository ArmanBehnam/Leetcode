#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* convert(char* s, int numRows);

void runTest(char* s, int numRows, char* expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input: s = \"%s\", numRows = %d\n", s, numRows);
    
    char* result = convert(s, numRows);
    
    printf("Output: \"%s\"\n", result);
    printf("Expected: \"%s\"\n", expected);
    
    int testPassed = strcmp(result, expected) == 0;
    printf("Test passed: %s\n\n", testPassed ? "true" : "false");
    
    // Assert the result matches expected
    assert(testPassed);
    
    // Free allocated memory
    free(result);
}

int main() {
    // Example 1
    runTest("PAYPALISHIRING", 3, "PAHNAPLSIIGYIR", 1);
    
    // Example 2
    runTest("PAYPALISHIRING", 4, "PINALSIGYAHRPI", 2);
    
    // Example 3
    runTest("A", 1, "A", 3);
    
    // Additional test cases
    runTest("AB", 1, "AB", 4);
    
    printf("All test cases passed!\n");
    return 0;
}