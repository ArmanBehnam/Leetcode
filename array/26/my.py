class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # Handle empty array case
        if not nums:
            return 0
            
        # Position to place the next unique element
        k = 1
        
        # Iterate through array starting from second element
        for i in range(1, len(nums)):
            # If current element is different from previous element
            if nums[i] != nums[i-1]:
                # Place current element at position k
                nums[k] = nums[i]
                k += 1
                
        return k
        