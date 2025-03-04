#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int strStr(char * haystack, char * needle) {
    // Edge case: if needle is empty, return 0
    if (*needle == '\0') {
        return 0;
    }
    
    // Get the lengths of both strings
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);
    
    // If needle is longer than haystack, it can't be found
    if (needleLen > haystackLen) {
        return -1;
    }
    
    // Iterate through haystack up to the point where a match is still possible
    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j;
        
        // Check if the substring starting at position i matches the needle
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        
        // If we went through the entire needle without breaking, we found a match
        if (j == needleLen) {
            return i;
        }
    }
    
    // If no match is found, return -1
    return -1;
}