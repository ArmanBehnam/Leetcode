class Solution {
    public int removeDuplicates(int[] nums) {
        // Handle empty array case
        if (nums == null || nums.length == 0) {
            return 0;
        }
        
        // Position to place the next unique element
        int k = 1;
        
        // Iterate through array starting from second element
        for (int i = 1; i < nums.length; i++) {
            // If current element is different from previous element
            if (nums[i] != nums[i-1]) {
                // Place current element at position k
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
}