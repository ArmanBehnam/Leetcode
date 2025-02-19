from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1: Basic case with few duplicates
    nums1 = [1, 1, 2]
    k1 = solution.removeDuplicates(nums1)
    print(f"Test case 1:")
    print(f"Input array: {nums1}")
    print(f"k = {k1}")
    print(f"First {k1} elements: {nums1[:k1]}")
    assert k1 == 2
    assert nums1[:k1] == [1, 2]
    
    # Test case 2: Array with more duplicates
    nums2 = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
    k2 = solution.removeDuplicates(nums2)
    print(f"\nTest case 2:")
    print(f"Input array: {nums2}")
    print(f"k = {k2}")
    print(f"First {k2} elements: {nums2[:k2]}")
    assert k2 == 5
    assert nums2[:k2] == [0, 1, 2, 3, 4]
    
    # Test case 3: Array with no duplicates
    nums3 = [1, 2, 3]
    k3 = solution.removeDuplicates(nums3)
    print(f"\nTest case 3:")
    print(f"Input array: {nums3}")
    print(f"k = {k3}")
    print(f"First {k3} elements: {nums3[:k3]}")
    assert k3 == 3
    assert nums3[:k3] == [1, 2, 3]
    
    # Test case 4: Array with single element
    nums4 = [1]
    k4 = solution.removeDuplicates(nums4)
    print(f"\nTest case 4:")
    print(f"Input array: {nums4}")
    print(f"k = {k4}")
    print(f"First {k4} elements: {nums4[:k4]}")
    assert k4 == 1
    assert nums4[:k4] == [1]
    
    print("\nAll test cases passed!")