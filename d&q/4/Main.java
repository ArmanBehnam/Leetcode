class TestSolution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Test case 1
        int[] nums1 = {1, 3};
        int[] nums2 = {2};
        double result1 = solution.findMedianSortedArrays(nums1, nums2);
        System.out.println("Test case 1:");
        System.out.printf("Input: nums1 = [%d,%d], nums2 = [%d]%n", 
            nums1[0], nums1[1], nums2[0]);
        System.out.printf("Output: %.5f%n%n", result1);
        
        // Test case 2
        int[] nums3 = {1, 2};
        int[] nums4 = {3, 4};
        double result2 = solution.findMedianSortedArrays(nums3, nums4);
        System.out.println("Test case 2:");
        System.out.printf("Input: nums1 = [%d,%d], nums2 = [%d,%d]%n", 
            nums3[0], nums3[1], nums4[0], nums4[1]);
        System.out.printf("Output: %.5f%n%n", result2);
        
    }
}