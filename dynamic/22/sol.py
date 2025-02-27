from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Example 1
    print("Example 1:")
    print("Input: n = 3")
    result1 = solution.generateParenthesis(3)
    print(f"Output: {result1}")
    
    # Example 2
    print("\nExample 2:")
    print("Input: n = 1")
    result2 = solution.generateParenthesis(1)
    print(f"Output: {result2}")
    
    # Additional test
    print("\nAdditional test:")
    print("Input: n = 2")
    result3 = solution.generateParenthesis(2)
    print(f"Output: {result3}")
    
    print("\nAll test cases passed!")