class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        # Sort array to handle duplicates and use two-pointer technique
        nums.sort()
        result = []
        n = len(nums)
        
        # Iterate through the array, using i as the first number
        for i in range(n - 2):
            # Skip duplicates for i
            if i > 0 and nums[i] == nums[i - 1]:
                continue
                
            # Use two pointers: left starts after i, right starts at end
            left = i + 1
            right = n - 1
            
            while left < right:
                current_sum = nums[i] + nums[left] + nums[right]
                
                if current_sum == 0:
                    # Found a triplet that sums to zero
                    result.append([nums[i], nums[left], nums[right]])
                    
                    # Skip duplicates for left
                    while left < right and nums[left] == nums[left + 1]:
                        left += 1
                    # Skip duplicates for right
                    while left < right and nums[right] == nums[right - 1]:
                        right -= 1
                        
                    # Move both pointers
                    left += 1
                    right -= 1
                    
                elif current_sum < 0:
                    # Sum is too small, increment left to get a larger sum
                    left += 1
                else:
                    # Sum is too large, decrement right to get a smaller sum
                    right -= 1
                    
        return result
    
# Time Complexity: O(n²) where n is the length of the input array
# Space Complexity: O(1) excluding the space needed for output