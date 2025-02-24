public class Main {
    public static void testJumpGame() {
        Solution solution = new Solution();
        
        // Test case 1: Example from problem statement
        int[] nums1 = {2,3,1,1,4};
        int result1 = solution.jump(nums1);
        System.out.println("Test case 1:");
        System.out.println("Input: " + java.util.Arrays.toString(nums1));
        System.out.println("Expected: 2");
        System.out.println("Got: " + result1);
        assert result1 == 2 : "Test case 1 failed";
        
        // Test case 2: Second example
        int[] nums2 = {2,3,0,1,4};
        int result2 = solution.jump(nums2);
        System.out.println("\nTest case 2:");
        System.out.println("Input: " + java.util.Arrays.toString(nums2));
        System.out.println("Expected: 2");
        System.out.println("Got: " + result2);
        assert result2 == 2 : "Test case 2 failed";
        
        // Test case 3: Single element array
        int[] nums3 = {1};
        int result3 = solution.jump(nums3);
        System.out.println("\nTest case 3:");
        System.out.println("Input: " + java.util.Arrays.toString(nums3));
        System.out.println("Expected: 0");
        System.out.println("Got: " + result3);
        assert result3 == 0 : "Test case 3 failed";
        
        // Test case 4: Minimum jumps needed
        int[] nums4 = {1,1,1,1};
        int result4 = solution.jump(nums4);
        System.out.println("\nTest case 4:");
        System.out.println("Input: " + java.util.Arrays.toString(nums4));
        System.out.println("Expected: 3");
        System.out.println("Got: " + result4);
        assert result4 == 3 : "Test case 4 failed";
        
        System.out.println("\nAll test cases passed!");
    }
    
    public static void main(String[] args) {
        testJumpGame();
    }
}