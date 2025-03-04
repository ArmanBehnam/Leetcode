class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if not needle:
            return 0
        
        # Get the lengths of both strings
        haystack_len = len(haystack)
        needle_len = len(needle)
        
        # If needle is longer than haystack, it can't be found
        if needle_len > haystack_len:
            return -1
        
        # Iterate through haystack up to the point where a match is still possible
        for i in range(haystack_len - needle_len + 1):
            # Check if the substring starting at position i matches the needle
            if haystack[i:i + needle_len] == needle:
                return i
        
        # If no match is found, return -1
        return -1
        