from my import Solution

if __name__ == "__main__":
    solution = Solution()
    test_nums1 = [[1,3], [1,2]]
    test_nums2 = [[2], [3,4]]
    test_output = [2,2.5]

    # Test case 1
    print(f"The first sorted array is {test_nums1[0]}, the second sorted array is {test_nums2[0]}")
    print(solution.findMedianSortedArrays(test_nums1[0], test_nums2[0]) == test_output[0])
    
    # Test case 1
    print(f"The first sorted array is {test_nums1[1]}, the second sorted array is {test_nums2[1]}")
    print(solution.findMedianSortedArrays(test_nums1[1], test_nums2[1]) == test_output[1])