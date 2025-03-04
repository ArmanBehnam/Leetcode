#include <stdio.h>
#include <string.h>

int strStr(char * haystack, char * needle);

int main() {
    // Example 1
    char* haystack1 = "sadbutsad";
    char* needle1 = "sad";
    int result1 = strStr(haystack1, needle1);
    printf("Example 1: %d (Expected: 0)\n", result1);
    
    // Example 2
    char* haystack2 = "leetcode";
    char* needle2 = "leeto";
    int result2 = strStr(haystack2, needle2);
    printf("Example 2: %d (Expected: -1)\n", result2);
    
    // Additional test - repeated pattern
    char* haystack3 = "mississippi";
    char* needle3 = "issip";
    int result3 = strStr(haystack3, needle3);
    printf("Example 3: %d (Expected: 4)\n", result3);
    
    // Edge case - single character
    char* haystack4 = "hello";
    char* needle4 = "l";
    int result4 = strStr(haystack4, needle4);
    printf("Example 4: %d (Expected: 2)\n", result4);
    
    return 0;
}