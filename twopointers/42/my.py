class Solution(object):
    def trap(self, height):
        """
        Calculate the amount of rainwater trapped using the most efficient approach.
        
        Args:
            height: List of heights representing the elevation map
            
        Returns:
            Total amount of rainwater trapped
        """
        # Edge cases
        if not height or len(height) < 3:
            return 0
        
        # Two pointers approach with optimizations
        left, right = 0, len(height) - 1
        left_max = height[left]
        right_max = height[right]
        total_water = 0
        
        # Skip initial zeros
        while left < right and height[left] == 0:
            left += 1
        while left < right and height[right] == 0:
            right -= 1
            
        # Process the array
        while left < right:
            # Update max heights and calculate water
            if height[left] <= height[right]:
                # If current height is smaller than left_max, water can be trapped
                if height[left] < left_max:
                    total_water += left_max - height[left]
                else:
                    left_max = height[left]
                left += 1
            else:
                # If current height is smaller than right_max, water can be trapped
                if height[right] < right_max:
                    total_water += right_max - height[right]
                else:
                    right_max = height[right]
                right -= 1
        
        return total_water