public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1
        int[] height1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        int result1 = solution.trap(height1);
        System.out.println("Example 1: " + result1 + " (Expected: 6)");
        
        // Example 2
        int[] height2 = {4, 2, 0, 3, 2, 5};
        int result2 = solution.trap(height2);
        System.out.println("Example 2: " + result2 + " (Expected: 9)");
        
        // Additional test with initial zeros
        int[] height3 = {0, 0, 5, 4, 1, 2};
        int result3 = solution.trap(height3);
        System.out.println("Additional test: " + result3 + " (Expected: 1)");
    }
}