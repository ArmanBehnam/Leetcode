public class Main {
    public static void testContainerWithMostWater() {
        Solution solution = new Solution();
        
        // Test case 1: Example from the problem
        int[] height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        assert solution.maxArea(height1) == 49 : "Test case 1 failed";
        
        // Test case 2: Minimum case with two elements
        int[] height2 = {1, 1};
        assert solution.maxArea(height2) == 1 : "Test case 2 failed";
        
        // Test case 3: Ascending heights
        int[] height3 = {1, 2, 3, 4, 5};
        assert solution.maxArea(height3) == 6 : "Test case 3 failed";
        
        // Test case 4: Descending heights
        int[] height4 = {5, 4, 3, 2, 1};
        assert solution.maxArea(height4) == 6 : "Test case 4 failed";
        
        // Test case 5: All same heights
        int[] height5 = {4, 4, 4, 4};
        assert solution.maxArea(height5) == 12 : "Test case 5 failed";
        
        System.out.println("All test cases passed!");
    }
    
    public static void main(String[] args) {
        testContainerWithMostWater();
    }
}