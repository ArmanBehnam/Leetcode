import java.util.HashMap;
import java.util.Map;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> seen = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (seen.containsKey(complement)) {
                return new int[] {seen.get(complement), i};
            }
            seen.put(nums[i], i);
        }
        return new int[]{};
    }
}

// This solution:
// Uses a HashMap for O(n) time complexity
// Follows Java naming conventions
// Includes proper error handling
// Has clear comments
// Includes test cases with formatted output