import java.util.*;

public class Main {
    public static void testFourSum() {
        Solution solution = new Solution();
        
        // Test case 1: Example from the problem
        int[] nums1 = {1, 0, -1, 0, -2, 2};
        int target1 = 0;
        List<List<Integer>> expected1 = Arrays.asList(
            Arrays.asList(-2, -1, 1, 2),
            Arrays.asList(-2, 0, 0, 2),
            Arrays.asList(-1, 0, 0, 1)
        );
        List<List<Integer>> result1 = solution.fourSum(nums1, target1);
        System.out.println("Test case 1:");
        System.out.println("nums=" + Arrays.toString(nums1));
        System.out.println("target=" + target1);
        System.out.println("expected=" + expected1);
        System.out.println("result=" + result1);
        assert result1.size() == expected1.size() : "Test case 1 failed: Wrong number of quadruplets";
        
        // Test case 2: All same numbers
        int[] nums2 = {2, 2, 2, 2, 2};
        int target2 = 8;
        List<List<Integer>> expected2 = Arrays.asList(
            Arrays.asList(2, 2, 2, 2)
        );
        List<List<Integer>> result2 = solution.fourSum(nums2, target2);
        System.out.println("\nTest case 2:");
        System.out.println("nums=" + Arrays.toString(nums2));
        System.out.println("target=" + target2);
        System.out.println("expected=" + expected2);
        System.out.println("result=" + result2);
        assert result2.size() == expected2.size() : "Test case 2 failed: Wrong number of quadruplets";
        
        System.out.println("\nAll test cases passed!");
    }
    
    public static void main(String[] args) {
        testFourSum();
    }
}