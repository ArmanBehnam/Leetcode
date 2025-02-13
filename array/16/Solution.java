import java.util.*;
class Solution {
    public int threeSumClosest(int[] nums, int target) {
        // Sort the array first
        Arrays.sort(nums);
        
        // Initialize closest sum with first three numbers
        int closestSum = nums[0] + nums[1] + nums[2];
        
        // Iterate through each number as the first number
        for (int i = 0; i < nums.length - 2; i++) {
            // Use two pointers for remaining numbers
            int left = i + 1;
            int right = nums.length - 1;
            
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                
                // If we found exact target, return it
                if (currentSum == target) {
                    return currentSum;
                }
                
                // Update closestSum if currentSum is closer to target
                if (Math.abs(target - currentSum) < Math.abs(target - closestSum)) {
                    closestSum = currentSum;
                }
                
                // Move pointers based on comparison with target
                if (currentSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return closestSum;
    }
}