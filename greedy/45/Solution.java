class Solution {
    public int jump(int[] nums) {
        if (nums.length <= 1) return 0;
        
        int jumps = 0;
        int currentMaxReach = 0;
        int currentBoundary = 0;
        
        for (int i = 0; i < nums.length - 1; i++) {
            currentMaxReach = Math.max(currentMaxReach, i + nums[i]);
            
            if (i == currentBoundary) {
                jumps++;
                currentBoundary = currentMaxReach;
            }
        }
        
        return jumps;
    }
}