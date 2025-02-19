from my import Solution

if __name__ == "__main__":
    solution = Solution()

    # Test case 1: Basic case
    nums1 = [3, 2, 2, 3]
    val1 = 3
    k1 = solution.removeElement(nums1, val1)
    print(f"Test case 1:")
    print(f"Input array: {nums1}, val = {val1}")
    print(f"k = {k1}")
    print(f"First {k1} elements (unsorted): {nums1[:k1]}")
    nums1[:k1] = sorted(nums1[:k1])  # Sort first k elements
    print(f"First {k1} elements (sorted): {nums1[:k1]}")
    assert k1 == 2
    assert sorted(nums1[:k1]) == [2, 2]
    
    # Test case 2: Multiple occurrences
    nums2 = [0, 1, 2, 2, 3, 0, 4, 2]
    val2 = 2
    k2 = solution.removeElement(nums2, val2)
    print(f"\nTest case 2:")
    print(f"Input array: {nums2}, val = {val2}")
    print(f"k = {k2}")
    print(f"First {k2} elements (unsorted): {nums2[:k2]}")
    nums2[:k2] = sorted(nums2[:k2])  # Sort first k elements
    print(f"First {k2} elements (sorted): {nums2[:k2]}")
    assert k2 == 5
    assert sorted(nums2[:k2]) == [0, 0, 1, 3, 4]
    
    # Test case 3: Empty array
    nums3 = []
    val3 = 1
    k3 = solution.removeElement(nums3, val3)
    print(f"\nTest case 3:")
    print(f"Input array: {nums3}, val = {val3}")
    print(f"k = {k3}")
    assert k3 == 0
    
    # Test case 4: No elements to remove
    nums4 = [1, 2, 3, 4]
    val4 = 5
    k4 = solution.removeElement(nums4, val4)
    print(f"\nTest case 4:")
    print(f"Input array: {nums4}, val = {val4}")
    print(f"k = {k4}")
    print(f"First {k4} elements (unsorted): {nums4[:k4]}")
    nums4[:k4] = sorted(nums4[:k4])  # Sort first k elements
    print(f"First {k4} elements (sorted): {nums4[:k4]}")
    assert k4 == 4
    assert sorted(nums4[:k4]) == [1, 2, 3, 4]
    
    # Test case 5: All elements to be removed
    nums5 = [1, 1, 1]
    val5 = 1
    k5 = solution.removeElement(nums5, val5)
    print(f"\nTest case 5:")
    print(f"Input array: {nums5}, val = {val5}")
    print(f"k = {k5}")
    assert k5 == 0
    
    print("\nAll test cases passed!")