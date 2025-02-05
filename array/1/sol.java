class TestSolution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Test case 1
        int[] nums1 = {2, 7, 11, 15};
        int target1 = 9;
        int[] result1 = solution.twoSum(nums1, target1);
        System.out.println("Test case 1:");
        System.out.printf("Input: nums = [%d,%d,%d,%d], target = %d%n", 
            nums1[0], nums1[1], nums1[2], nums1[3], target1);
        System.out.printf("Output: [%d,%d]%n%n", result1[0], result1[1]);
        
        // Test case 2
        int[] nums2 = {3, 2, 4};
        int target2 = 6;
        int[] result2 = solution.twoSum(nums2, target2);
        System.out.println("Test case 2:");
        System.out.printf("Input: nums = [%d,%d,%d], target = %d%n", 
            nums2[0], nums2[1], nums2[2], target2);
        System.out.printf("Output: [%d,%d]%n%n", result2[0], result2[1]);
        
        // Test case 3
        int[] nums3 = {3, 3};
        int target3 = 6;
        int[] result3 = solution.twoSum(nums3, target3);
        System.out.println("Test case 3:");
        System.out.printf("Input: nums = [%d,%d], target = %d%n", 
            nums3[0], nums3[1], target3);
        System.out.printf("Output: [%d,%d]%n", result3[0], result3[1]);
    }
}