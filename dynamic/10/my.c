#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool dp(int i, int j, const char* s, const char* p, bool** memo, int sLen, int pLen) {
    if (memo[i][j] != -1) {
        return memo[i][j];
    }
    
    bool ans;
    if (j >= pLen) {
        ans = (i >= sLen);
    } else {
        bool first_match = (i < sLen && (s[i] == p[j] || p[j] == '.'));
        
        if (j + 1 < pLen && p[j + 1] == '*') {
            ans = dp(i, j + 2, s, p, memo, sLen, pLen) || 
                  (first_match && dp(i + 1, j, s, p, memo, sLen, pLen));
        } else {
            ans = first_match && dp(i + 1, j + 1, s, p, memo, sLen, pLen);
        }
    }
    
    memo[i][j] = ans;
    return ans;
}

bool isMatch(char* s, char* p) {
    int sLen = strlen(s);
    int pLen = strlen(p);
    
    // Allocate memoization table
    bool** memo = (bool**)malloc((sLen + 1) * sizeof(bool*));
    for (int i = 0; i <= sLen; i++) {
        memo[i] = (bool*)malloc((pLen + 1) * sizeof(bool));
        for (int j = 0; j <= pLen; j++) {
            memo[i][j] = -1;  // -1 represents unvisited state
        }
    }
    
    bool result = dp(0, 0, s, p, memo, sLen, pLen);
    
    // Free memory
    for (int i = 0; i <= sLen; i++) {
        free(memo[i]);
    }
    free(memo);
    
    return result;
}