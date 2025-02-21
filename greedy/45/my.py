class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) <= 1:
            return 0
        
        # Initialize variables to track the current max reach and the boundary of current jump
        jumps = 0
        current_max_reach = 0
        current_boundary = 0
        
        # Iterate through the array (except last element as we don't need to jump from there)
        for i in range(len(nums) - 1):
            # Update the farthest position we can reach from current position
            current_max_reach = max(current_max_reach, i + nums[i])
            
            # If we've reached the boundary of current jump
            if i == current_boundary:
                # Make a jump
                jumps += 1
                # Update the boundary to the farthest we can reach
                current_boundary = current_max_reach
                
        return jumps
        