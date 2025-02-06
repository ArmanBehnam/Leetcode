public class Solution {
    public int maxArea(int[] height) {
        if (height == null || height.length < 2) {
            return 0;
        }
        
        int left = 0;
        int right = height.length - 1;
        int maxArea = 0;
        
        while (left < right) {
            // Calculate width between lines
            int width = right - left;
            
            // Height is limited by the shorter line
            int currentHeight = Math.min(height[left], height[right]);
            
            // Calculate current area
            int area = width * currentHeight;
            
            // Update maxArea if current area is larger
            maxArea = Math.max(maxArea, area);
            
            // Move the pointer of the shorter line inward
            // Since keeping the shorter line won't give us a larger area
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxArea;
    }
}

// The time and space complexity remain the same:

// Time complexity: O(n)
// Space complexity: O(1)