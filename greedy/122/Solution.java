class Solution {
    public boolean isMatch(String s, String p) {
        int sIndex = 0, pIndex = 0;
        int starIndex = -1, matchIndex = -1;
        
        while (sIndex < s.length()) {
            // If pattern char matches string char or is '?'
            if (pIndex < p.length() && (p.charAt(pIndex) == '?' || 
                p.charAt(pIndex) == s.charAt(sIndex))) {
                sIndex++;
                pIndex++;
            }
            // If pattern char is '*'
            else if (pIndex < p.length() && p.charAt(pIndex) == '*') {
                // Record the position of '*' and the current matching position
                starIndex = pIndex;
                matchIndex = sIndex;
                pIndex++;
            }
            // If we have a previous '*'
            else if (starIndex != -1) {
                // Backtrack: use the '*' to match current character
                pIndex = starIndex + 1;
                matchIndex++;
                sIndex = matchIndex;
            }
            // No match and no '*' to use
            else {
                return false;
            }
        }
        
        // Check for remaining characters in pattern
        while (pIndex < p.length() && p.charAt(pIndex) == '*') {
            pIndex++;
        }
        
        return pIndex == p.length();
    }
}