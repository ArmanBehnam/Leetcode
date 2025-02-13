class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        # Sort the array first to use two-pointer technique
        nums.sort()
        n = len(nums)
        closest_sum = float('inf')
        
        # Iterate through each number as the first number
        for i in range(n - 2):
            # Use two pointers for the remaining two numbers
            left = i + 1
            right = n - 1
            
            while left < right:
                current_sum = nums[i] + nums[left] + nums[right]
                
                # If we found the target sum, return it immediately
                if current_sum == target:
                    return current_sum
                
                # Update closest_sum if current_sum is closer to target
                if abs(target - current_sum) < abs(target - closest_sum):
                    closest_sum = current_sum
                
                # If sum is less than target, we need a larger sum, so move left pointer
                if current_sum < target:
                    left += 1
                # If sum is more than target, we need a smaller sum, so move right pointer
                else:
                    right -= 1
        
        return closest_sum
    
# First, we sort the array to make it easier to use the two-pointer technique.
# We initialize closest_sum with infinity to store our closest sum to target.
# The main loop iterates through each number as the potential first number of our triplet.
# For each first number, we use two pointers (left and right) to find the other two numbers:

# Left pointer starts right after the current number
# Right pointer starts at the end of the array


# For each combination of three numbers, we:

# Calculate their sum
# Check if this sum is exactly equal to target (if yes, return immediately)
# Check if this sum is closer to target than our previous closest_sum
# Move pointers based on whether we need a larger or smaller sum