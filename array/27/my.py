class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        k = 0
        
        # Iterate through array
        for i in range(len(nums)):
            # If current element is not val, place it at position k
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
                
        return k
        