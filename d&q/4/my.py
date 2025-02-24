from typing import List

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        # Make sure nums1 is the shorter array
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1
        
        m, n = len(nums1), len(nums2)
        total_length = m + n
        half = (total_length + 1) // 2  # Middle point
        
        left, right = 0, m
        
        while left <= right:
            # Binary search on the shorter array (nums1)
            partition1 = (left + right) // 2
            # Calculate partition2 based on partition1
            partition2 = half - partition1
            
            # Get left and right elements for both arrays
            left1 = float('-inf') if partition1 == 0 else nums1[partition1 - 1]
            right1 = float('inf') if partition1 == m else nums1[partition1]
            left2 = float('-inf') if partition2 == 0 else nums2[partition2 - 1]
            right2 = float('inf') if partition2 == n else nums2[partition2]
            
            # Check if we found the correct partition
            if left1 <= right2 and left2 <= right1:
                # If total length is odd
                if total_length % 2 == 1:
                    return max(left1, left2)
                # If total length is even
                return (max(left1, left2) + min(right1, right2)) / 2
            # If partition is too far right
            elif left1 > right2:
                right = partition1 - 1
            # If partition is too far left
            else:
                left = partition1 + 1
        
        raise ValueError("Input arrays are not sorted")

# This solution:
  
# doing binary search on the shorter array to optimize performance.
# calculate the middle point (half) which helps maintain balanced partitions.
# For each partition in nums1, calculate the corresponding partition in nums2
# check four values: elements just before and after the partition in both arrays