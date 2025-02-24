#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>

char* longestPalindrome(char* s);

void runTest(char* s, char* expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input: \"%s\"\n", s);
    printf("Expected: \"%s\"\n", expected);
    
    char* result = longestPalindrome(s);
    printf("Got: \"%s\"\n", result);
    
    // For cases with multiple valid answers, check length
    if (strcmp(result, expected) != 0) {
        assert(strlen(result) == strlen(expected));
        printf("Note: Multiple valid answers possible\n");
    }
    
    free(result);
    printf("Test case %d passed!\n\n", testCase);
}

void runPerformanceTest() {
    printf("Running performance test...\n");
    
    // Create a large palindromic string
    char* largeString = (char*)malloc(10001);
    memset(largeString, 'a', 10000);
    largeString[10000] = '\0';
    
    clock_t start = clock();
    
    for (int i = 0; i < 100; i++) {
        char* result = longestPalindrome(largeString);
        free(result);
    }
    
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    
    free(largeString);
    printf("Performance test completed in: %f seconds\n\n", time_spent);
}

int main() {
    // Run performance test
    runPerformanceTest();
    
    // Test case 1: Example from problem statement
    runTest("babad", "bab", 1);
    
    // Test case 2: Second example
    runTest("cbbd", "bb", 2);
    
    // Test case 3: Single character
    runTest("a", "a", 3);
    
    // Test case 4: All same characters
    runTest("aaaa", "aaaa", 4);
    
    // Test case 5: Long palindrome
    runTest("xababababa", "ababababa", 5);
    
    // Test case 6: Empty string
    runTest("", "", 6);
    
    // Test case 7: Two characters
    runTest("ac", "a", 7);
    
    printf("All test cases passed!\n");
    return 0;
}