from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1: Example from problem statement where jump is possible
    nums1 = [2,3,1,1,4]
    result1 = solution.canJump(nums1)
    print(f"Test case 1:")
    print(f"Input: {nums1}")
    print(f"Expected: True")
    print(f"Got: {result1}")
    assert result1 == True, "Test case 1 failed"
    
    # Test case 2: Example where jump is impossible
    nums2 = [3,2,1,0,4]
    result2 = solution.canJump(nums2)
    print(f"\nTest case 2:")
    print(f"Input: {nums2}")
    print(f"Expected: False")
    print(f"Got: {result2}")
    assert result2 == False, "Test case 2 failed"
    
    # Test case 3: Single element array
    nums3 = [0]
    result3 = solution.canJump(nums3)
    print(f"\nTest case 3:")
    print(f"Input: {nums3}")
    print(f"Expected: True")
    print(f"Got: {result3}")
    assert result3 == True, "Test case 3 failed"
    
    # Test case 4: Array with zero trapping
    nums5 = [1,0,1,0]
    result5 = solution.canJump(nums5)
    print(f"\nTest case 5:")
    print(f"Input: {nums5}")
    print(f"Expected: False")
    print(f"Got: {result5}")
    assert result5 == False, "Test case 4 failed"
    
    print("\nAll test cases passed!")