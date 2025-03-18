class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if not s:
            return 0
        
        char_map = {}  # Maps character to its most recent position
        start = 0      # Start of current substring
        max_length = 0
        
        for end, char in enumerate(s):
            # If we see a duplicate character within our current window
            if char in char_map and char_map[char] >= start:
                # Move the start pointer to position after the earlier occurrence
                start = char_map[char] + 1
            # Update the max length
            max_length = max(max_length, end - start + 1)
            # Record this character's position
            char_map[char] = end
        
        return max_length
        