int lengthOfLongestSubstring(char* s) {
    if (s == NULL || *s == '\0') {
        return 0;
    }
    
    int maxLength = 0;
    int start = 0;
    int charIndex[128]; // ASCII characters
    
    // Initialize the array with -1 to indicate character hasn't been seen
    for (int i = 0; i < 128; i++) {
        charIndex[i] = -1;
    }
    
    for (int end = 0; s[end] != '\0'; end++) {
        char c = s[end];
        
        // If this character was seen and its index is >= our current window start
        if (charIndex[c] >= start) {
            // Move start to position after the previous occurrence
            start = charIndex[c] + 1;
        }
        
        // Update maximum length
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
        
        // Record this character's position
        charIndex[c] = end;
    }
    
    return maxLength;
}