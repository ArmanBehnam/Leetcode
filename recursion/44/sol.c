#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <time.h>

// Function declaration
bool isMatch(char* s, char* p);

void runTest(char* s, char* p, bool expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("String: %s\n", s);
    printf("Pattern: %s\n", p);
    printf("Expected: %s\n", expected ? "true" : "false");
    
    bool result = isMatch(s, p);
    printf("Got: %s\n", result ? "true" : "false");
    
    assert(result == expected);
    printf("Test case %d passed!\n\n", testCase);
}

void runPerformanceTest() {
    printf("Running performance test...\n");
    
    // Create large test strings
    char largeStr[1001];
    char largePattern[1001];
    
    // Fill test strings
    for (int i = 0; i < 1000; i++) {
        largeStr[i] = 'a';
        largePattern[i] = (i % 10 == 0) ? '*' : 'a';
    }
    largeStr[1000] = '\0';
    largePattern[1000] = '\0';
    
    clock_t start = clock();
    
    // Run large test multiple times
    for (int i = 0; i < 100; i++) {
        isMatch(largeStr, largePattern);
    }
    
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Performance test completed in: %f seconds\n\n", time_spent);
}

int main() {
    // Run performance test
    runPerformanceTest();
    
    // Test case 1: Basic non-matching case
    runTest("aa", "a", false, 1);
    
    // Test case 2: Star pattern
    runTest("aa", "*", true, 2);
    
    // Test case 3: Question mark pattern
    runTest("cb", "?a", false, 3);
    
    // Test case 4: Complex pattern
    runTest("adceb", "*a*b", true, 4);
    
    // Test case 5: Empty string and pattern
    runTest("", "", true, 5);
    
    // Test case 6: Multiple stars
    runTest("abcde", "a*c*e", true, 6);
    
    // Test case 7: Long pattern with multiple stars
    runTest("aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba",
            "*****b*aba***babaa*bbaba***a*aaba*b*aa**a*b*", true, 7);
    
    // Test case 8: Pattern longer than string
    runTest("abc", "abc*", true, 8);
    
    // Test case 9: Complex mismatch
    runTest("mississippi", "m*issi*", false, 9);
    
    printf("All test cases passed!\n");
    return 0;
}