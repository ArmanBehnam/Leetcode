public class Main {
    public static void testJumpGame() {
        Solution solution = new Solution();
        
        // Test case 1: Example where jump is possible
        int[] nums1 = {2,3,1,1,4};
        boolean result1 = solution.canJump(nums1);
        System.out.println("Test case 1:");
        System.out.println("Input: " + java.util.Arrays.toString(nums1));
        System.out.println("Expected: true");
        System.out.println("Got: " + result1);
        assert result1 : "Test case 1 failed";
        
        // Test case 2: Example where jump is impossible
        int[] nums2 = {3,2,1,0,4};
        boolean result2 = solution.canJump(nums2);
        System.out.println("\nTest case 2:");
        System.out.println("Input: " + java.util.Arrays.toString(nums2));
        System.out.println("Expected: false");
        System.out.println("Got: " + result2);
        assert !result2 : "Test case 2 failed";
        
        // Test case 3: Single element array
        int[] nums3 = {0};
        boolean result3 = solution.canJump(nums3);
        System.out.println("\nTest case 3:");
        System.out.println("Input: " + java.util.Arrays.toString(nums3));
        System.out.println("Expected: true");
        System.out.println("Got: " + result3);
        assert result3 : "Test case 3 failed";
        
        // Test case 4: Array with all zeros except first
        int[] nums4 = {2,0,0,0};
        boolean result4 = solution.canJump(nums4);
        System.out.println("\nTest case 4:");
        System.out.println("Input: " + java.util.Arrays.toString(nums4));
        System.out.println("Expected: true");
        System.out.println("Got: " + result4);
        assert result4 : "Test case 4 failed";
        
        // Test case 5: Array with zero trapping
        int[] nums5 = {1,0,1,0};
        boolean result5 = solution.canJump(nums5);
        System.out.println("\nTest case 5:");
        System.out.println("Input: " + java.util.Arrays.toString(nums5));
        System.out.println("Expected: false");
        System.out.println("Got: " + result5);
        assert !result5 : "Test case 5 failed";
        
        System.out.println("\nAll test cases passed!");
    }
    
    public static void main(String[] args) {
        testJumpGame();
    }
}