from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1: Example from problem statement
    s1 = "babad"
    result1 = solution.longestPalindrome(s1)
    print(f"Test case 1:")
    print(f"Input: {s1}")
    print(f"Expected: bab or aba")
    print(f"Got: {result1}")
    assert result1 in ["bab", "aba"], "Test case 1 failed"
    
    # Test case 2: Another example from problem statement
    s2 = "cbbd"
    result2 = solution.longestPalindrome(s2)
    print(f"\nTest case 2:")
    print(f"Input: {s2}")
    print(f"Expected: bb")
    print(f"Got: {result2}")
    assert result2 == "bb", "Test case 2 failed"
    
    # Test case 3: Single character
    s3 = "a"
    result3 = solution.longestPalindrome(s3)
    print(f"\nTest case 3:")
    print(f"Input: {s3}")
    print(f"Expected: a")
    print(f"Got: {result3}")
    assert result3 == "a", "Test case 3 failed"
    
    # Test case 4: All same characters
    s4 = "aaaa"
    result4 = solution.longestPalindrome(s4)
    print(f"\nTest case 4:")
    print(f"Input: {s4}")
    print(f"Expected: aaaa")
    print(f"Got: {result4}")
    assert result4 == "aaaa", "Test case 4 failed"
    
    # Test case 5: No palindrome longer than 1
    s5 = "abcd"
    result5 = solution.longestPalindrome(s5)
    print(f"\nTest case 5:")
    print(f"Input: {s5}")
    print(f"Expected: a or b or c or d")
    print(f"Got: {result5}")
    assert len(result5) == 1, "Test case 5 failed"
    
    print("\nAll test cases passed!")