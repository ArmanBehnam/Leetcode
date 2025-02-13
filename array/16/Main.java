import java.util.*;

public class Main {
    public static void test3SumClosest() {
        Solution solution = new Solution();
        
        // Test case 1: Example from the problem
        int[] nums1 = {-1, 2, 1, -4};
        int target1 = 1;
        int expected1 = 2;
        int result1 = solution.threeSumClosest(nums1, target1);
        System.out.println("Test case 1: nums=" + Arrays.toString(nums1) + 
                         ", target=" + target1 + ", expected=" + expected1);
        assert result1 == expected1 : "Test case 1 failed";
        
        // Test case 2: All zeros
        int[] nums2 = {0, 0, 0};
        int target2 = 1;
        int expected2 = 0;
        int result2 = solution.threeSumClosest(nums2, target2);
        System.out.println("Test case 2: nums=" + Arrays.toString(nums2) + 
                         ", target=" + target2 + ", expected=" + expected2);
        assert result2 == expected2 : "Test case 2 failed";
        
        System.out.println("All test cases passed!");
    }
    
    public static void main(String[] args) {
        test3SumClosest();
    }
}