from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Example 1
    haystack1 = "sadbutsad"
    needle1 = "sad"
    result1 = solution.strStr(haystack1, needle1)
    print(f"Example 1: {result1} (Expected: 0)")
    
    # Example 2
    haystack2 = "leetcode"
    needle2 = "leeto"
    result2 = solution.strStr(haystack2, needle2)
    print(f"Example 2: {result2} (Expected: -1)")
    
    # Additional test - repeated pattern
    haystack3 = "mississippi"
    needle3 = "issip"
    result3 = solution.strStr(haystack3, needle3)
    print(f"Example 3: {result3} (Expected: 4)")
    
    # Edge case - single character
    haystack4 = "hello"
    needle4 = "l" 
    result4 = solution.strStr(haystack4, needle4)
    print(f"Example 4: {result4} (Expected: 2)")