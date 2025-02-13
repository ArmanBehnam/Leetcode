import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        // Sort the array first
        Arrays.sort(nums);
        List<List<Integer>> result = new ArrayList<>();
        
        // Iterate through the array up to third-to-last element
        for (int i = 0; i < nums.length - 2; i++) {
            // Skip duplicates for i
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Use two pointers technique
            int left = i + 1;
            int right = nums.length - 1;
            
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                
                if (currentSum == 0) {
                    // Found a valid triplet
                    result.add(Arrays.asList(nums[i], nums[left], nums[right]));
                    
                    // Skip duplicates for left
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicates for right
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    
                    // Move both pointers
                    left++;
                    right--;
                } else if (currentSum < 0) {
                    // Sum is too small, increment left
                    left++;
                } else {
                    // Sum is too large, decrement right
                    right--;
                }
            }
        }
        
        return result;
    }
}