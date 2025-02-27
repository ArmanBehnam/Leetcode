class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        result = []
        
        def backtrack(s="", open_count=0, close_count=0):
            # Base case: if the string has 2*n characters, we've used all parentheses
            if len(s) == 2 * n:
                result.append(s)
                return
            
            # We can add an open parenthesis if we haven't used all n
            if open_count < n:
                backtrack(s + "(", open_count + 1, close_count)
            
            # We can add a closing parenthesis if there are unclosed open parentheses
            if close_count < open_count:
                backtrack(s + ")", open_count, close_count + 1)
        
        # Start the backtracking
        backtrack()
        return result
        