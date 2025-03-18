#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// Function declaration
int lengthOfLongestSubstring(char* s);

void runTest(char* s, int expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input: s = \"%s\"\n", s);
    
    int result = lengthOfLongestSubstring(s);
    
    printf("Output: %d\n", result);
    printf("Expected: %d\n", expected);
    
    // Assert the result matches expected
    assert(result == expected);
    
    printf("Test case %d passed!\n\n", testCase);
}

int main() {
    // Test case 1
    runTest("abcabcbb", 3, 1);
    
    // Test case 2
    runTest("bbbbb", 1, 2);
    
    // Test case 3
    runTest("pwwkew", 3, 3);
    
    // Additional test cases
    runTest("", 0, 4); // Empty string
    runTest("a", 1, 5); // Single character
    runTest("aab", 2, 6); // Repeating character at start
    
    printf("All test cases passed!\n");
    return 0;
}