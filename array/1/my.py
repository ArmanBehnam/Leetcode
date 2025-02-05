from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]
            seen[num] = i
        return []
    
# This solution:
# Uses a dictionary to store numbers we've seen and their indices
# Has O(n) time complexity - much better than the O(n^2) brute force approach
# Has O(n) space complexity
# Handles all the given test cases
# Meets all the problem constraints