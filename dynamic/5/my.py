class Solution:
    def longestPalindrome(self, s: str) -> str:
        """
        Find the longest palindromic substring in s using dynamic programming.
        Time complexity: O(n^2)
        Space complexity: O(n^2)
        """
        if not s:
            return ""
            
        n = len(s)
        # dp[i][j] represents whether s[i:j+1] is palindrome
        dp = [[False] * n for _ in range(n)]
        
        # All single characters are palindromes
        for i in range(n):
            dp[i][i] = True
            
        start = 0
        max_length = 1
        
        # Check for palindromes of length 2
        for i in range(n-1):
            if s[i] == s[i+1]:
                dp[i][i+1] = True
                start = i
                max_length = 2
                
        # Check for palindromes of length 3 or more
        for length in range(3, n + 1):
            for i in range(n - length + 1):
                j = i + length - 1
                
                # A substring is palindrome if first and last characters match
                # and the substring between them is also a palindrome
                if s[i] == s[j] and dp[i+1][j-1]:
                    dp[i][j] = True
                    if length > max_length:
                        start = i
                        max_length = length
                        
        return s[start:start + max_length]