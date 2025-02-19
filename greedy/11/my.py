class Solution:
    def maxArea(self, height: list[int]) -> int:
        if not height or len(height) < 2:
            return 0
            
        left = 0
        right = len(height) - 1
        max_area = 0
        
        while left < right:
            # Calculate width between lines
            width = right - left
            
            # Height is limited by the shorter line
            curr_height = min(height[left], height[right])
            
            # Calculate current area
            area = width * curr_height
            
            # Update max_area if current area is larger
            max_area = max(max_area, area)
            
            # Move the pointer of the shorter line inward
            # Since keeping the shorter line won't give us a larger area
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
                
        return max_area
    
# In this solution:
# Use two pointers, left and right, starting from the ends of the array
# Calculate the area between the lines at these pointers:

# Width = right - left
# Height = minimum of the two line heights
# Area = width * height