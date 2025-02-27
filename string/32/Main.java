public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1
        String s1 = "(()";
        int result1 = solution.longestValidParentheses(s1);
        System.out.println("Example 1:");
        System.out.println("Input: s = \"" + s1 + "\"");
        System.out.println("Output: " + result1);
        
        // Example 2
        String s2 = ")()())";
        int result2 = solution.longestValidParentheses(s2);
        System.out.println("\nExample 2:");
        System.out.println("Input: s = \"" + s2 + "\"");
        System.out.println("Output: " + result2);
        
        // Example 3
        String s3 = "";
        int result3 = solution.longestValidParentheses(s3);
        System.out.println("\nExample 3:");
        System.out.println("Input: s = \"" + s3 + "\"");
        System.out.println("Output: " + result3);
        
        // Additional test
        String s4 = "()(())";
        int result4 = solution.longestValidParentheses(s4);
        System.out.println("\nAdditional test:");
        System.out.println("Input: s = \"" + s4 + "\"");
        System.out.println("Output: " + result4);
    }
}