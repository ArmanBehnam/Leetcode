import java.util.*;

public class Main {
    public static void test3sum() {
        Solution solution = new Solution();
        
        // Test case 1
        int[] input1 = {-1, 0, 1, 2, -1, -4};
        List<List<Integer>> expected1 = Arrays.asList(
            Arrays.asList(-1, -1, 2),
            Arrays.asList(-1, 0, 1)
        );
        assert solution.threeSum(input1).containsAll(expected1) && 
               expected1.containsAll(solution.threeSum(input1)) : "Test case 1 failed";
        
        // Test case 2
        int[] input2 = {0, 1, 1};
        List<List<Integer>> expected2 = new ArrayList<>();
        assert solution.threeSum(input2).equals(expected2) : "Test case 2 failed";
        
        // Test case 3
        int[] input3 = {0, 0, 0};
        List<List<Integer>> expected3 = Arrays.asList(
            Arrays.asList(0, 0, 0)
        );
        assert solution.threeSum(input3).containsAll(expected3) && 
               expected3.containsAll(solution.threeSum(input3)) : "Test case 3 failed";
        
        System.out.println("All test cases passed!");
    }
    
    public static void main(String[] args) {
        test3sum();
    }
}