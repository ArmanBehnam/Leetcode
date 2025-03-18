class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        
        int maxLength = 0;
        int start = 0;
        int[] charIndex = new int[128]; // ASCII characters
        
        // Initialize the array with -1 to indicate character hasn't been seen
        for (int i = 0; i < 128; i++) {
            charIndex[i] = -1;
        }
        
        for (int end = 0; end < s.length(); end++) {
            char c = s.charAt(end);
            
            // If this character was seen and its index is >= our current window start
            if (charIndex[c] >= start) {
                // Move start to position after the previous occurrence
                start = charIndex[c] + 1;
            }
            
            // Update maximum length
            maxLength = Math.max(maxLength, end - start + 1);
            
            // Record this character's position
            charIndex[c] = end;
        }
        
        return maxLength;
    }
}