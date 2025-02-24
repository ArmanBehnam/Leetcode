char* longestPalindrome(char* s) {
    if (!s || strlen(s) == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }
    
    int len = strlen(s);
    // Calculate transformed string length: ^#c1#c2#...#cn$
    int transformedLen = 2 * len + 4;
    
    // Allocate memory for transformed string
    char* transformed = (char*)malloc(transformedLen);
    transformed[0] = '^';
    transformed[1] = '#';
    
    // Build transformed string
    int j = 2;
    for (int i = 0; i < len; i++) {
        transformed[j++] = s[i];
        transformed[j++] = '#';
    }
    transformed[j++] = '$';
    transformed[j] = '\0';
    
    // Allocate P array for storing palindrome radii
    int* P = (int*)calloc(transformedLen, sizeof(int));
    
    int center = 0, right = 0;
    int maxLen = 0, maxCenter = 0;
    
    // Main Manacher's algorithm
    for (int i = 1; i < transformedLen - 1; i++) {
        if (i < right) {
            int mirror = 2 * center - i;
            P[i] = (right - i < P[mirror]) ? right - i : P[mirror];
        }
        
        // Attempt to expand palindrome centered at i
        while (transformed[i + P[i] + 1] == transformed[i - P[i] - 1]) {
            P[i]++;
        }
        
        // Update center and right boundary if necessary
        if (i + P[i] > right) {
            center = i;
            right = i + P[i];
        }
        
        // Track longest palindrome
        if (P[i] > maxLen) {
            maxLen = P[i];
            maxCenter = i;
        }
    }
    
    // Calculate start position in original string
    int start = (maxCenter - maxLen) / 2;
    
    // Allocate and copy result
    char* result = (char*)malloc(maxLen + 1);
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';
    
    // Free allocated memory
    free(transformed);
    free(P);
    
    return result;
}
