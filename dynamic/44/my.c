bool isMatch(char* s, char* p) {
    const char* starPos = NULL;    // Position of last '*'
    const char* matchPos = s;      // Position in s that matched with '*'
    
    while (*s) {
        // If characters match or '?' in pattern
        if (*p == '?' || *p == *s) {
            s++;
            p++;
        }
        // If '*' found in pattern
        else if (*p == '*') {
            starPos = p++;         // Record star position and move pattern forward
            matchPos = s;          // Record current matching position
        }
        // If we found a star before
        else if (starPos) {
            p = starPos + 1;       // Backtrack pattern to after star
            s = ++matchPos;        // Try next position in string
        }
        // No match and no star
        else {
            return false;
        }
    }
    
    // Skip remaining '*' in pattern
    while (*p == '*') {
        p++;
    }
    
    return *p == '\0';    // True if we reached end of pattern
}