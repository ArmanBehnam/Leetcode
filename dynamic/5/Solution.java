class Solution {
    public String longestPalindrome(String s) {
        if (s == null || s.length() < 1) {
            return "";
        }
        
        // Transform the string
        // Example: "babad" -> "^#b#a#b#a#d#$"
        StringBuilder transformed = new StringBuilder("^#");
        for (char c : s.toCharArray()) {
            transformed.append(c).append("#");
        }
        transformed.append("$");
        
        int n = transformed.length();
        int[] P = new int[n];  // P[i] represents palindrome radius at center i
        int center = 0, right = 0;
        int maxLen = 0, maxCenter = 0;
        
        for (int i = 1; i < n - 1; i++) {
            if (i < right) {
                // Use mirror property to avoid unnecessary comparisons 
                int mirror = 2 * center - i;
                P[i] = Math.min(right - i, P[mirror]);
            }
            
            // Expand palindrome centered at i
            while (transformed.charAt(i + P[i] + 1) == transformed.charAt(i - P[i] - 1)) {
                P[i]++;
            }
            
            // Update center and right boundary if necessary
            if (i + P[i] > right) {
                center = i;
                right = i + P[i];
            }
            
            // Update longest palindrome if necessary
            if (P[i] > maxLen) {
                maxLen = P[i];
                maxCenter = i;
            }
        }
        
        // Convert back to original string indices
        int start = (maxCenter - maxLen) / 2;
        return s.substring(start, start + maxLen);
    }
}