class Solution {
    public int strStr(String haystack, String needle) {
        // Edge case: if needle is empty, return 0
        if (needle.isEmpty()) {
            return 0;
        }
        
        // Get the lengths of both strings
        int haystackLen = haystack.length();
        int needleLen = needle.length();
        
        // If needle is longer than haystack, it can't be found
        if (needleLen > haystackLen) {
            return -1;
        }
        
        // Iterate through haystack up to the point where a match is still possible
        for (int i = 0; i <= haystackLen - needleLen; i++) {
            // Check if the substring starting at position i matches the needle
            if (haystack.substring(i, i + needleLen).equals(needle)) {
                return i;
            }
        }
        
        // If no match is found, return -1
        return -1;
    }
}