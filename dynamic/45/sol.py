from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1: Example from problem statement
    nums1 = [2,3,1,1,4]
    result1 = solution.jump(nums1)
    print(f"Test case 1:")
    print(f"Input: {nums1}")
    print(f"Expected: 2")
    print(f"Got: {result1}")
    assert result1 == 2, "Test case 1 failed"
    
    # Test case 2: Another example from problem statement
    nums2 = [2,3,0,1,4]
    result2 = solution.jump(nums2)
    print(f"\nTest case 2:")
    print(f"Input: {nums2}")
    print(f"Expected: 2")
    print(f"Got: {result2}")
    assert result2 == 2, "Test case 2 failed"
    
    # Test case 3: Single element array
    nums3 = [1]
    result3 = solution.jump(nums3)
    print(f"\nTest case 3:")
    print(f"Input: {nums3}")
    print(f"Expected: 0")
    print(f"Got: {result3}")
    assert result3 == 0, "Test case 3 failed"
    
    # Test case 4: Minimum jumps needed
    nums4 = [1,1,1,1]
    result4 = solution.jump(nums4)
    print(f"\nTest case 4:")
    print(f"Input: {nums4}")
    print(f"Expected: 3")
    print(f"Got: {result4}")
    assert result4 == 3, "Test case 4 failed"
    
    # Test case 5: Maximum possible jumps
    nums5 = [5,9,3,2,1,0,2,3,3,1,0,0]
    result5 = solution.jump(nums5)
    print(f"\nTest case 5:")
    print(f"Input: {nums5}")
    print(f"Expected: 3")
    print(f"Got: {result5}")
    assert result5 == 3, "Test case 5 failed"
    
    print("\nAll test cases passed!")