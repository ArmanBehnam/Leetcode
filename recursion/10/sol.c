#include <stdio.h>
#include <assert.h>
#include <time.h>

// Function declaration
bool dp(int i, int j, const char* s, const char* p, bool** memo, int sLen, int pLen);
bool isMatch(char* s, char* p);


void runTest(char* s, char* p, bool expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input: s = \"%s\", p = \"%s\"\n", s, p);
    printf("Expected: %s\n", expected ? "true" : "false");
    
    bool result = isMatch(s, p);
    printf("Got: %s\n", result ? "true" : "false");
    
    assert(result == expected);
    printf("Test case %d passed!\n\n", testCase);
}

void runPerformanceTest() {
    printf("Running performance test...\n");
    
    // Create a large input string and pattern
    char s[1001] = {0};
    char p[1001] = {0};
    memset(s, 'a', 1000);
    memset(p, 'a', 500);
    strcat(p, ".*");
    
    clock_t start = clock();
    bool result = isMatch(s, p);
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
    runTest("aa", "a*", true, 2);
    
    // Test case 3: Dot star pattern
    runTest("ab", ".*", true, 3);
    
    // Test case 4: Complex pattern
    runTest("mississippi", "mis*is*ip*.", true, 4);
    
    // Test case 5: Empty strings
    runTest("", "", true, 5);
    
    printf("All test cases passed!\n");
    return 0;
}