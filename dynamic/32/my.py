class Solution(object):
    def longestValidParentheses(self, s):
        """
        :type s: str
        :rtype: int
        """
        if not s:
            return 0
        
        # Using stack method
        # Stack stores the indices of characters
        stack = [-1]  # Initialize with -1 as base for empty stack calculations
        max_length = 0
        
        for i in range(len(s)):
            if s[i] == '(':
                # Push the index of opening parenthesis
                stack.append(i)
            else:  # s[i] == ')'
                # Pop the last opening parenthesis or base
                stack.pop()
                
                if not stack:
                    # If stack is empty, push current index as new base
                    stack.append(i)
                else:
                    # Calculate length of valid substring ending at current position
                    # Current index minus the last index in stack
                    max_length = max(max_length, i - stack[-1])
        
        return max_length
    
    def longestValidParentheses_dp(self, s):
        """
        Alternative solution using dynamic programming approach.
        """
        if not s:
            return 0
        
        n = len(s)
        # dp[i] = length of longest valid substring ending at i
        dp = [0] * n
        max_length = 0
        
        for i in range(1, n):
            if s[i] == ')':
                # Case 1: ()
                if s[i-1] == '(':
                    dp[i] = (dp[i-2] if i >= 2 else 0) + 2
                # Case 2: ))
                elif i - dp[i-1] > 0 and s[i - dp[i-1] - 1] == '(':
                    dp[i] = dp[i-1] + 2
                    # Add previous valid substring if it exists
                    if i - dp[i-1] - 2 >= 0:
                        dp[i] += dp[i - dp[i-1] - 2]
                
                max_length = max(max_length, dp[i])
        
        return max_length
        