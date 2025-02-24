from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1: Basic non-matching case
    s1, p1 = "aa", "a"
    result1 = solution.isMatch(s1, p1)
    print(f"Test case 1:")
    print(f"String: {s1}")
    print(f"Pattern: {p1}")
    print(f"Expected: False")
    print(f"Got: {result1}")
    assert result1 == False, "Test case 1 failed"
    
    # Test case 2: Star pattern
    s2, p2 = "aa", "*"
    result2 = solution.isMatch(s2, p2)
    print(f"\nTest case 2:")
    print(f"String: {s2}")
    print(f"Pattern: {p2}")
    print(f"Expected: True")
    print(f"Got: {result2}")
    assert result2 == True, "Test case 2 failed"
    
    # Test case 3: Question mark pattern
    s3, p3 = "cb", "?a"
    result3 = solution.isMatch(s3, p3)
    print(f"\nTest case 3:")
    print(f"String: {s3}")
    print(f"Pattern: {p3}")
    print(f"Expected: False")
    print(f"Got: {result3}")
    assert result3 == False, "Test case 3 failed"
    
    # Test case 4: Complex pattern
    s4, p4 = "adceb", "*a*b"
    result4 = solution.isMatch(s4, p4)
    print(f"\nTest case 4:")
    print(f"String: {s4}")
    print(f"Pattern: {p4}")
    print(f"Expected: True")
    print(f"Got: {result4}")
    assert result4 == True, "Test case 4 failed"
    
    # Test case 5: Empty string and pattern
    s5, p5 = "", ""
    result5 = solution.isMatch(s5, p5)
    print(f"\nTest case 5:")
    print(f"String: {s5}")
    print(f"Pattern: {p5}")
    print(f"Expected: True")
    print(f"Got: {result5}")
    assert result5 == True, "Test case 5 failed"
    
    # Test case 6: Multiple stars
    s6, p6 = "abcde", "a*c*e"
    result6 = solution.isMatch(s6, p6)
    print(f"\nTest case 6:")
    print(f"String: {s6}")
    print(f"Pattern: {p6}")
    print(f"Expected: True")
    print(f"Got: {result6}")
    assert result6 == True, "Test case 6 failed"
    
    print("\nAll test cases passed!")