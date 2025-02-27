class Solution {
    public int trap(int[] height) {
        // Edge cases
        if (height == null || height.length < 3) {
            return 0;
        }
        
        int left = 0;
        int right = height.length - 1;
        int leftMax = height[left];
        int rightMax = height[right];
        int totalWater = 0;
        
        // Skip initial zeros
        while (left < right && height[left] == 0) {
            left++;
        }
        while (left < right && height[right] == 0) {
            right--;
        }
        
        // Update max heights if we moved the pointers
        if (left > 0) leftMax = height[left];
        if (right < height.length - 1) rightMax = height[right];
        
        // Main loop
        while (left < right) {
            if (height[left] <= height[right]) {
                if (height[left] < leftMax) {
                    totalWater += leftMax - height[left];
                } else {
                    leftMax = height[left];
                }
                left++;
            } else {
                if (height[right] < rightMax) {
                    totalWater += rightMax - height[right];
                } else {
                    rightMax = height[right];
                }
                right--;
            }
        }
        
        return totalWater;
    }
}