class Solution(object):
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        cache = {}
        
        def dp(i, j):
            if (i, j) in cache:
                return cache[(i, j)]
                
            if j >= len(p):
                ans = i >= len(s)
            else:
                first_match = i < len(s) and (s[i] == p[j] or p[j] == '.')
                
                if j + 1 < len(p) and p[j + 1] == '*':
                    ans = dp(i, j + 2) or (first_match and dp(i + 1, j))
                else:
                    ans = first_match and dp(i + 1, j + 1)
                    
            cache[(i, j)] = ans
            return ans
            
        return dp(0, 0)
        
        