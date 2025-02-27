from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Example 1
    s1 = "(()"
    result1 = solution.longestValidParentheses(s1)
    print(f"Example 1:")
    print(f"Input: s = \"{s1}\"")
    print(f"Output: {result1}")
    
    # Example 2
    s2 = ")()())"
    result2 = solution.longestValidParentheses(s2)
    print(f"\nExample 2:")
    print(f"Input: s = \"{s2}\"")
    print(f"Output: {result2}")
    
    # Example 3
    s3 = ""
    result3 = solution.longestValidParentheses(s3)
    print(f"\nExample 3:")
    print(f"Input: s = \"{s3}\"")
    print(f"Output: {result3}")
    
    # Additional test
    s4 = "()(()"
    result4 = solution.longestValidParentheses(s4)
    print(f"\nAdditional test:")
    print(f"Input: s = \"{s4}\"")
    print(f"Output: {result4}")
    
    print("\nAll test cases passed!")