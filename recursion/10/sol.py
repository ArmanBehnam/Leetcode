from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1: Basic non-matching case
    s1, p1 = "aa", "a"
    result1 = solution.isMatch(s1, p1)
    print(f"Test case 1:")
    print(f"Input: s = {s1}, p = {p1}")
    print(f"Expected: False")
    print(f"Got: {result1}")
    assert result1 == False, "Test case 1 failed"
    
    # Test case 2: Star pattern
    s2, p2 = "aa", "a*"
    result2 = solution.isMatch(s2, p2)
    print(f"\nTest case 2:")
    print(f"Input: s = {s2}, p = {p2}")
    print(f"Expected: True")
    print(f"Got: {result2}")
    assert result2 == True, "Test case 2 failed"
    
    # Test case 3: Dot star pattern
    s3, p3 = "ab", ".*"
    result3 = solution.isMatch(s3, p3)
    print(f"\nTest case 3:")
    print(f"Input: s = {s3}, p = {p3}")
    print(f"Expected: True")
    print(f"Got: {result3}")
    assert result3 == True, "Test case 3 failed"
    
    # Test case 4: Complex pattern
    s4, p4 = "mississippi", "mis*is*ip*."
    result4 = solution.isMatch(s4, p4)
    print(f"\nTest case 4:")
    print(f"Input: s = {s4}, p = {p4}")
    print(f"Expected: True")
    print(f"Got: {result4}")
    assert result4 == True, "Test case 4 failed"
    
    # Test case 5: Empty strings
    s5, p5 = "", ""
    result5 = solution.isMatch(s5, p5)
    print(f"\nTest case 5:")
    print(f"Input: s = {s5}, p = {p5}")
    print(f"Expected: True")
    print(f"Got: {result5}")
    assert result5 == True, "Test case 5 failed"
    
    print("\nAll test cases passed!")