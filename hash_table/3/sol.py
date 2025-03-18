from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Example 1
    print("Example 1:")
    s1 = "abcabcbb"
    print(f"Input: s = \"{s1}\"")
    result1 = solution.lengthOfLongestSubstring(s1)
    print(f"Output: {result1}")
    expected1 = 3
    print(f"Expected: {expected1}")
    print(f"Test passed: {result1 == expected1}")
    
    # Example 2
    print("\nExample 2:")
    s2 = "bbbbb"
    print(f"Input: s = \"{s2}\"")
    result2 = solution.lengthOfLongestSubstring(s2)
    print(f"Output: {result2}")
    expected2 = 1
    print(f"Test passed: {result2 == expected2}")
    
    # Example 3
    print("\nExample 3:")
    s3 = "pwwkew"
    print(f"Input: s = \"{s3}\"")
    result3 = solution.lengthOfLongestSubstring(s3)
    print(f"Output: {result3}")
    expected3 = 3
    print(f"Test passed: {result3 == expected3}")
    
    print("\nAll test cases completed!")